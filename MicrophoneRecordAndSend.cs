
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using System;
using UnityEngine;
using UnityEngine.UI;

public class MicrophoneRecordAndSend : MonoBehaviour
{

    private string micName;
    private TcpClient socketConnection;
    public Text micText;
    public Text connectionText;
    public Text pythonText;
    public Text testText;
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

        }
    }

    void OnDisable()
    {
        socketConnection.Close();
    }

}

