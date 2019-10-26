import socket
import sys
import os
import numpy as np
from Scripts import Plottest
import winsound
import csv
import datetime
os.getcwd()

SERVER_PORT = 50123
SERVER_PORT1 = 57098
SERVER_HOST = "100.80.243.141"
SAMPLE_RATE = 44100
SECONDS = 5
FILE_DURATION = 2 # Seconds
size = [0, 0]
i = 0

# Create a TCP socket server
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# starts the server
sock.bind((SERVER_HOST, SERVER_PORT)) # listens to connections comming from anywhere
# sock.bind(('192.168.43.214', SERVER_PORT))
# sock.bind((SERVER_HOST, SERVER_PORT1))
sock.listen(2)


while True:
   print("Waiting for a connection!")
   connection, client_address = sock.accept() # blocks until someone connects

   try:
       print("connected",client_address)
       connection.send(b'start video recordings')  
       filecount = 1
       while True:
#            vidCap = 'mldb -d capture video -w -t 5 rectest%d.mp4'%i
#            os.system(vidCap)
#            print('recording %d made'%i)
#            i += 1
           
           data =np.zeros(filecount)
           file_size = connection.recv(4)

           if len(file_size) < 4:
               break
           file_size = int.from_bytes(file_size, byteorder='big')
           print("Receiving a file with %d bytes" % file_size)

           total_read = 0

           with open("Scripts\\mic10%03d.raw" % filecount, "wb") as f:
               while total_read < file_size:
                   file_data = connection.recv(file_size - total_read) # reads as much as it can
                   if len(file_data) == 0:
                       break
                   f.write(file_data)
                   total_read += len(file_data)

           if (total_read != file_size):
               print("Error reading the file")
               break
           else:
               print("Saved file mic10%03d.raw from %s" % (filecount, client_address))
           # read from file (C:\Users\truon\Desktop\MayRecord31st\MayRecord31st\wavFiles\ROS) 
           # average 2 sliding windows, check it against threshold then send the message
           #TODO(later): check runtime

           if not os.path.exists('ROS.csv'):
                filecount +=1
                print('ros not exist')
                continue
           data= np.genfromtxt('ROS.csv', dtype = float, delimiter = ',')
           print("data:", data)
           print("after ROS: " , datetime.datetime.now())
   
           print("count:", filecount)
           print("length: ",data.size)

           num1 = data[-1]
           print("num1:",num1)
           num2 = data[-2]
           print("num2:",num2)
           avg = (num1+num2)/2
           print("avg:",avg) 
           if(avg>= 3):
               mes = b'too fast'
               print("Data Sent")
               connection.send(mes)
               
               #playsound
               frequency = 440  # Set Frequency To 2500 Hertz
               duration = 1000  # Set Duration To 1000 ms == 1 second
               winsound.Beep(frequency, duration)
           else:
               mes = b' '
               connection.send(mes)
               
      
           
           filecount += 1
   finally:
       mes = b''
       connection.send(mes)
       connection.close()
       print(client_address, "disconnected")
    

