# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 16:04:11 2019

@author: moon
"""

import os
import socket
import sys
import keyboard

# SERVER_PORT = 50123
# SERVER_HOST = '100.80.243.141'

# # Create a TCP/IP socket
# sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# # Connect the socket to the port where the server is listening
# server_address = (SERVER_HOST, SERVER_PORT)

# x = sock.connect(server_address)
# # if sock.connect_ex(server_address) == 0
# # {
# #     print("Connected")
# # }
# # else
# #     print("Failed to Connect")
i = 0
while True:
#     mes = len(sock.recv(100))
#     print("message length:", mes)
#     if mes > 0:
      vidCap = 'mldb -d capture video -q 720p -t 2 rectest%d.mp4'%i
      #  mldb capture video -r -q 720p -t 120 rendered.mp4
      os.system(vidCap)
      print('recording %d made'%i)
      i += 1
      if keyboard.is_pressed('q'):
         break
#     else:
#         break

