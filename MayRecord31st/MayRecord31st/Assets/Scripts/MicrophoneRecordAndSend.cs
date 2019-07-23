
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using System.Threading;
using System.Text;
using System;
using UnityEngine;
using UnityEngine.UI;

public class MicrophoneRecordAndSend : MonoBehaviour
{

    private string micName;
    private int message;
    private TcpClient socketConnection;
    //private string path;
    public Text micText;
    public Text connectionText;
    public Text pythonText;
    public Text testText;
    private Thread  clientReceiveThread;
    private int count = 2;

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


    }

    void Start()
    {
        ConnectToTcpServer();
        Debug.Log("Hi");
    }


    // Start is called before the first frame update
    void OnEnable()
    {

        // Use the first detected Microphone device.
        if (Microphone.devices.Length > 0)
        {
            micName = Microphone.devices[0];
            micText.text = ""+ micName;
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
            //audioSource.Play();
            Debug.Log("recording");


        }
    }

    int lastPos;
    void LateUpdate()
    {
        int currentPos = Microphone.GetPosition(micName);
        if(lastPos > currentPos)
        {
            lastPos = 0;
        }
        //Debug.Log("Last Pos" + lastPos);
        //Debug.Log("current possition" + currentPos);
        // have we recorded something since last update?
        pythonText.text = "Last Pos:" + lastPos;
        testText.text = "Current Pos" + currentPos;

        if (currentPos >= count*44100-100)
        {
            int length = 88200;
            //int length = currentPos - lastPos;
            
            // get the data from the audio clip as floats
            float[] clipData = new float[length];
            recordedAudio.GetData(clipData, lastPos);
            
            Debug.Log("Recorded (s): " + length / 44100.0);
            testText.text = "Recorded (s): " + length / 44100;

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
            //Debug.Log(result);

            stream.Write(clipDataInBytes, 0, clipDataInBytes.Length);
            lastPos = currentPos;
            count = count + 2;
            //string path = "C:\Users\truon\Desktop\MayRecord31st\MayRecord31st\Scripts";
        }

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
        Debug.Log("Hello");
        try
        {
            Byte[] bytes = new Byte[1024];
            while (true)
            {
                // Get a stream object for reading 				
                using (NetworkStream stream = socketConnection.GetStream())
                {
                    int length;
                    // Read incomming stream into byte arrary. 					
                    while ((length = stream.Read(bytes, 0, bytes.Length)) != 0)
                    {
           
                        var incommingData = new byte[length];
                        Array.Copy(bytes, 0, incommingData, 0, length);
                        // Convert byte array to string message. 						
                        string serverMessage = Encoding.ASCII.GetString(incommingData);
                        //data = System.Text.Encoding.ASCII.GetString(bytes, 0, i);
                        //m_log += String.Format("Received: {0}\n", data);
                        //micText.text = String.Format("M: {0}", serverMessage);
                        micText.text = "Recieve";
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

    void OnDisable()
    {
        socketConnection.Close();
    }

}

