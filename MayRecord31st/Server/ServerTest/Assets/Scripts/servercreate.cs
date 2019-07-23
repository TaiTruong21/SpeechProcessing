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

}