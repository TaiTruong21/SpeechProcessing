using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using System;
using UnityEngine;
using UnityEngine.UI;

public class Record : MonoBehaviour
{

    private string micName;
    private TcpClient socketConnection;
    private int offset;
    private int i = 0;
    public Text micText;
    public Text connectionText;
    public Text pythonText;
    public Text testText;
    public int windowlength;



    [SerializeField, Tooltip("TCP Server Port Number")]
    private int TCPSocketPort = 50123;
    //private int TCPSocketPort = 4444;


    [SerializeField, Tooltip("TCP Server Address")]
    private string TCPSocketAddress = "100.83.14.149";
    //private string TCPSocketAddress = "localhost";

    AudioClip recordedAudio;

    void Awake()
    {
        socketConnection = new TcpClient(TCPSocketAddress, TCPSocketPort);
        Debug.Log("Connected to:\nServer: " + TCPSocketAddress + "\nPort: " + TCPSocketPort.ToString());
    }


    // Start is called before the first frame update
    void Start()
    {

        // Use the first detected Microphone device.
        if (Microphone.devices.Length > 0)
        {
            micName = Microphone.devices[0];         //eventually try to access other mic's like this
            micText.text = "Recording audio from: " + micName;
            connectionText.text = TCPSocketAddress;
            connectionText.text = "Connected to:" + TCPSocketAddress + "Server" + " Port: " + TCPSocketPort.ToString();


        }

        AudioSource audioSource = GetComponent<AudioSource>();
        
        if (audioSource == null)
        {
            Debug.LogError("Could not find an AudioSource");
        }
        else
        {

            recordedAudio = Microphone.Start(micName, true, windowlength + 1, 44100); //change recorded window dur here
            //false on Magicleap: record tfor a few sencond then the length becomes 0
            //audioSource.clip = Microphone.Start(micName, true, 5, 44100);
            //audioSource.Play();
            Debug.Log("recording");
            testText.text = "recording" + micName;


        }
    }

    void Update()
    {
        int length = Microphone.GetPosition(micName);
        pythonText.text = "recording:" + length;

        if (length >= windowlength * 44100)
        {

            // get the data from the audio clip as floats
            float[] clipData = new float[length];
            recordedAudio.GetData(clipData, 0);

            Debug.Log("Recorded (s): " + length / 44100);
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

            // stops and starts recording ??? cause delay while recording ==> lossing information ===>  measured speechrate would be lower than actual speechrate
            // why need to stop before record again?
            // can move to the beginning in the if statement ??
            Microphone.End(micName);
            recordedAudio = Microphone.Start(micName, true, windowlength + 1, 44100);

            // send that to the server
            stream.Write(intBytes, 0, intBytes.Length);
            Debug.Log("Sent 4 bytes with file size: " + recordingByteSize);
            connectionText.text = "" + recordingByteSize;
            Debug.Log(result);


            stream.Write(clipDataInBytes, 0, clipDataInBytes.Length);
            Debug.Log("Sent x seconds of data to the server!");

        }
    }

    void OnDisable()
    {
        socketConnection.Close();
    }

}
