# -*- coding: utf-8 -*-
"""
Created on Tue Jul  9 14:56:21 2019

@author: moon

README:
    Save this file in user/MagicLeap/mlsdk/v####/
    This script repeatedly makes {rectime} second audio recordings from the magic
    leap and saves them as {filename}###.wav in a new folder called 
    {foldername} Mon Day Time. Hold q to end the recordings.
    
    Libraries used: os, shutil, datetime, keyboard
"""

import os, datetime, keyboard, glob, shutil

currentDT = datetime.datetime.now()
time = currentDT.strftime('%b %d %H %M %S')

#filename = 'recording'
foldername = 'Recordings'
rectime = 5

folderstring = './%s %s/'%(foldername, time) 
os.mkdir(folderstring)

print('Starting recording with %d second windows'%(rectime))
print('Hold q to end recordings')

counter=1
while True:
    #num = format(counter, '03d')
    #filestring ='recording%s.wav'%(filename, num)
    #reccmd = 'mldb audiocapture -a -d %d recording%d'%(rectime, counter)
    os.system('mldb audiocapture -a -d %d recording%d.wav'%(rectime, counter))
    #pullcmd = 'mldb pull -D C1/recording%d'%(counter) 
    os.system('mldb pull -D C1/recording%d.wav'%(counter))
    #print('%d Recording(s) Made, %d seconds recorded'%(counter, counter*rectime))
    if keyboard.is_pressed('q'):
        print('Ending recordings, %d files recorded'%(counter))
        break
    counter += 1
    
recordings = glob.glob('./*.wav')
for r in recordings:
    shutil.move(r, folderstring)
