import socket
import sys

SERVER_PORT = 50123
# SERVER_PORT = 57098
SAMPLE_RATE = 44100
SECONDS = 5


# Create a TCP socket server
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# starts the server
sock.bind(('0.0.0.0', SERVER_PORT)) # listens to connections comming from anywhere
# sock.bind(('192.168.43.214', SERVER_PORT))
sock.listen(1)

while True:
   print("Waiting for a connection!")
   connection, client_address = sock.accept() # blocks until someone connects

   try:
       print("connected",client_address)
       filecount = 1
       while True:
           file_size = connection.recv(4)

           if len(file_size) < 4:
               break
           file_size = int.from_bytes(file_size, byteorder='big')
           print("Receiving a file with %d bytes" % file_size)

           total_read = 0

           with open("mic%03d.raw" % filecount, "wb") as f:
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
               print("Saved file mic%03d.raw from %s" % (filecount, client_address))
           filecount += 1
   finally:
       connection.close()
       print(client_address, "disconnected")
