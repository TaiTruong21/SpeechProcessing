using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using System.Threading;
using System.Text;
using UnityEngine.XR.MagicLeap;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

[RequireComponent(typeof(PrivilegeRequester))]
public class VideoRecordandSend : MonoBehaviour
{
    [System.Serializable]
    private class VideoCaptureEvent : UnityEvent<string>
    { }

    private const string _validFileFormat = ".mp4";

    private const float _minRecordingTime = 1.0f;

    // Is the camera currently recording
    private bool _isCapturing;

    // The file path to the active capture
    private string _captureFilePath;

    private bool _isCameraConnected = false;

    private float _captureStartTime;

    private PrivilegeRequester _privilegeRequester = null;

    private bool _hasStarted = false;

    private bool _appPaused = false;

    private float time1;
    private float time2;

    private string micName;
    private TcpClient socketConnection;
    private string serverMessage;
    //private string path;
    public Text micText;
    public Text pythonText;
    public Text testText;
    public Image flag;
    private int len;
    Camera mainCam;
    private Thread clientReceiveThread;
    private int count = 5;

    [Tooltip("Use the window length to adjust latency (How much it records before sending)")]
    public int windowLength = 100;

    [SerializeField, Tooltip("TCP Server Port Number")]
    private int TCPSocketPort = 50123;


    [SerializeField, Tooltip("TCP Server Address")]
    private string TCPSocketAddress = "localhost";

    AudioClip recordedAudio;


    void Awake()
    {
        socketConnection = new TcpClient(TCPSocketAddress, TCPSocketPort);
        Debug.Log("Connected to:\nServer: " + TCPSocketAddress + "\nPort: " + TCPSocketPort.ToString());
        ConnectToTcpServer();
        //handling privileges
        _privilegeRequester = GetComponent<PrivilegeRequester>();
        if (_privilegeRequester == null)
        {
            Debug.LogError("Missing PrivilegeRequester component");
            enabled = false;
            return;
        }

        _privilegeRequester.OnPrivilegesDone += HandlePrivilegesDone;
    }

    //void Start()
    //{
    //ConnectToTcpServer(); 

    //}


    // Start is called before the first frame update
    void OnEnable()
    {

        // Use the first detected Microphone device.
        if (Microphone.devices.Length > 0)
        {
            micName = Microphone.devices[0];
            
        }

        AudioSource audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            Debug.LogError("Could not find an AudioSource");
        }
        else
        {

            recordedAudio = Microphone.Start(micName, true, windowLength, 44100);
            //false on Magicleap: record tfor a few sencond then the length becomes 0
            //audioSource.clip = Microphone.Start(micName, true, 5, 44100);
            
            Debug.Log("recording");


        }
        //ConnectToTcpServer();
    }
    

    int lastPos;
    void LateUpdate()
    {
        int currentPos = Microphone.GetPosition(micName);
        if (lastPos > currentPos)
        {
            lastPos = 0;
        }


        if (currentPos >= count * 44100 - 100)
        {
            int length = 220500;
            //int length = currentPos - lastPos;

            // get the data from the audio clip as floats
            float[] clipData = new float[length];
            recordedAudio.GetData(clipData, lastPos);

            if(!_isCapturing)
            {
                StartCapture();
                time1 = Time.time;
                
                Debug.Log("In lateUpdate isCapturing value:" + _isCapturing);
            }

            Debug.Log("Recorded (s): " + length / 44100.0);
            

            // convert from float to byte 
            byte[] clipDataInBytes = new byte[clipData.Length * 4];
            Buffer.BlockCopy(clipData, 0, clipDataInBytes, 0, clipDataInBytes.Length);

            // send it to the server
            NetworkStream stream = socketConnection.GetStream();


            //  save the size of the recording into an array of bytes (big endian)
            int recordingByteSize = clipDataInBytes.Length; // length of the recording in bytes (that's the size of the byte array)
            byte[] intBytes = BitConverter.GetBytes(recordingByteSize);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(intBytes);
            byte[] result = intBytes; // result holds the size of our audio recording as an array of 4 bytes encoded in big endian

            // send that to the server
            stream.Write(intBytes, 0, intBytes.Length);
            //Debug.Log("Sent 4 bytes with file size: " + recordingByteSize);

            Debug.Log("recieved:" + serverMessage);
            micText.text = "message length: " + len;

            if (len > 5)
            {
                flag.fillMethod = Image.FillMethod.Radial90;
                flag.fillAmount = 1;
            }
            else
            {
                flag.fillMethod = Image.FillMethod.Radial90;
                flag.fillAmount = 0;
            }

            //Debug.Log(result);
            Debug.Log("recieved:" + serverMessage);
            micText.text = "message length: " + len;


            stream.Write(clipDataInBytes, 0, clipDataInBytes.Length);
            lastPos = currentPos;
            count = count + 5;
            //adjust audio source
            //AudioSource audio = GetComponent<AudioSource>();
            //audio.maxDistance = 1; 

        }

        timing();

    }

    void OnDestroy()
    {
        if (_privilegeRequester != null)
        {
            _privilegeRequester.OnPrivilegesDone -= HandlePrivilegesDone;
        }
    }

    public void timing()
    {
        time2 = Time.time;
        float diff = time2 - time1;
        if (diff > 5)
        {
            Debug.Log("time1:" + time1);
            Debug.Log("time2:" + time2);
            EndCapture();
        }

    }

    /// <summary>
    /// Start capturing video.
    /// </summary>
    public void StartCapture()
    {
        string fileName = System.DateTime.Now.ToString("MM_dd_yyyy__HH_mm_ss") + _validFileFormat;
        StartCapture(fileName);
    }

    /// <summary>
    /// Start capturing video to input filename.
    /// </summary>
    /// <param name="fileName">File path to write the video to.</param>
    public void StartCapture(string fileName)
    {
        Debug.Log("In StartCapture isCapturing value:" + _isCapturing);
        Debug.Log("In StartCapture MLCam value:" + MLCamera.IsStarted);
        Debug.Log("In StartCapture isCamConnected value:" + _isCameraConnected);
        if (!_isCapturing && MLCamera.IsStarted && _isCameraConnected)
        {
            // Check file fileName extensions
            string extension = System.IO.Path.GetExtension(fileName);
            if (string.IsNullOrEmpty(extension) || !extension.Equals(_validFileFormat, System.StringComparison.OrdinalIgnoreCase))
            {
                Debug.LogErrorFormat("Invalid fileName extension '{0}' passed into Capture({1}).\n" +
                    "Videos must be saved in {2} format.", extension, fileName, _validFileFormat);
                return;
            }

            string pathName = System.IO.Path.Combine(Application.persistentDataPath, fileName);

            MLResult result = MLCamera.StartVideoCapture(pathName);
            if (result.IsOk)
            {
                _isCapturing = true;
                _captureStartTime = Time.time;
                _captureFilePath = pathName;
               
            }
            else
            {
                if (result.Code == MLResultCode.PrivilegeDenied)
                {
                    Instantiate(Resources.Load("PrivilegeDeniedError"));
                }

                Debug.LogErrorFormat("Error: VideoCaptureExample failed to start video capture for {0}. Reason: {1}", fileName, MLCamera.GetErrorCode().ToString());
            }
        }
        else
        {
            Debug.LogErrorFormat("Error: VideoCaptureExample failed to start video capture for {0} because '{1}' is already recording!",
                fileName, _captureFilePath);
            testText.text = "Error: VideoCaptureExample failed to start video capture for {0} because '{1}' is already recording!"+
                (fileName, _captureFilePath);
        }
    }

    private void EnableMLCamera()
    {
        MLResult result = MLCamera.Start();
        if (result.IsOk)
        {
            result = MLCamera.Connect();
            _isCameraConnected = true;
        }
        else
        {
            if (result.Code == MLResultCode.PrivilegeDenied)
            {
                Instantiate(Resources.Load("PrivilegeDeniedError"));
            }

            Debug.LogErrorFormat("Error: VideoCaptureExample failed starting MLCamera, disabling script. Reason: {0}", result);
            pythonText.text = "Error: VideoCaptureExample failed starting MLCamera, disabling script. Reason: {0}"+ result;
            enabled = false;
            return;
        }
    }

    private void EnableCapture()
    {
        if (!_hasStarted)
        {
            EnableMLCamera();

            _hasStarted = true;
        }
    }
    void HandlePrivilegesDone(MLResult result)
    {
        if (!result.IsOk)
        {
            Debug.LogError("Failed to get all requested privileges. MLResult: " + result);
            micText.text = "Failed to get all requested privileges. MLResult: " + result;
            enabled = false;
            return;
        }
        else
        {
            EnableCapture();
        }

        Debug.Log("Now it is safe to start functionality that required Sensitive privilege");
        //GetComponent<ScriptThatRequiresSensitivePrivilegeFunctionality>().enabled = true;
        
    }

    private void ConnectToTcpServer()
    {
        try
        {
            clientReceiveThread = new Thread(new ThreadStart(ListenForData));
            clientReceiveThread.IsBackground = true;
            clientReceiveThread.Start();
        }
        catch (Exception e)
        {
            Debug.Log("On client connect exception " + e);
        }
    }
    private void ListenForData()
    {

        try
        {

            Byte[] bytes = new Byte[1024];
            while (true)
            {

                // Get a stream object for reading 				
                using (NetworkStream stream = socketConnection.GetStream())
                {


                    // Read incomming stream into byte arrary. 					
                    while ((len = stream.Read(bytes, 0, bytes.Length)) != 0)
                    {
                        var incommingData = new byte[len];
                        Array.Copy(bytes, 0, incommingData, 0, len);
                        //Convert byte array to string message. 						
                        serverMessage = Encoding.ASCII.GetString(incommingData);
                        Debug.Log("server message received as: " + serverMessage);
                        
                    }

                }


            }
        }
        catch (SocketException socketException)
        {
            Debug.Log("Socket exception: " + socketException);
        }
    }

    public void EndCapture()
    {
        Debug.Log("In EndCapture isCapturing value:" + _isCapturing);
        if (_isCapturing)
        {
            MLResult result = MLCamera.StopVideoCapture();
            if (result.IsOk)
            {
                _isCapturing = false;
                _captureStartTime = 0;
                _captureFilePath = null;
            }
            else
            {
                if (result.Code == MLResultCode.PrivilegeDenied)
                {
                    Instantiate(Resources.Load("PrivilegeDeniedError"));
                }

                Debug.LogErrorFormat("Error: VideoCaptureExample failed to end video capture. Error Code: {0}", MLCamera.GetErrorCode().ToString());
            }
        }
        else
        {
            Debug.LogError("Error: VideoCaptureExample failed to end video capture because the camera is not recording.");
        }
    }

    private void DisableMLCamera()
    {
        if (MLCamera.IsStarted)
        {
            MLCamera.Disconnect();
            _isCameraConnected = false;
            MLCamera.Stop();
        }
    }

    void OnDisable()
    {
        socketConnection.Close();
        if (_isCameraConnected)
        {
            DisableMLCamera();
        }
    }

}
