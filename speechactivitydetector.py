# -*- coding: utf-8 -*-
"""
Created on Fri May 31 12:09:36 2019

@author: nihar
"""

import numpy as np
import scipy.fftpack
#import random
#import matplotlib.pyplot as plt
import scipy.io
from scipy.io import wavfile as wf

Fs, data = wf.read("./exports/SpeechAndNoiseCombo.wav")
T = 1/Fs
frameSize = 0.5
eThresh = 20000*100000
fThresh = 195
sfmThresh = 2000
fftN = 20000
freqs = np.fft.fftfreq(fftN, T)

data = data.tolist()
N = len(data)
fullTime = N*T
carry = fullTime * frameSize
if (carry != 0):
    data.append([0]*int(carry*Fs))                         #0padding data for even sized frames
    fullTime = len(data)*T
numFrames = (int)(fullTime/frameSize)
samplesPerFrame = (int)(frameSize * Fs)

maxFreq = []
allEnergy = []
allMediandB = []
allClass = []

print("samplesPerFrame = ",samplesPerFrame)
print("numFrames = ",numFrames)
print("fullTime = ",fullTime)
print("data length = ",len(data))



for i in range(numFrames):
    
    #finds the overall properties of input frame
    frame = data[(i*samplesPerFrame):(i*samplesPerFrame + samplesPerFrame)]
    fftFrame = scipy.fftpack.fft(frame, fftN)
    pos = fftFrame[:N//2]
    mag = np.abs(pos)                                      #only positive values
    
    #calculates 3 features used for voice detection
    maxindex = np.argmax(mag)
    maxFreq.append(freqs[maxindex])                        #dominant Frequency of frame F(i)
    pwr = mag**2
    allEnergy.append(np.sum(pwr)/len(pwr))                 #energy of frame E(i)
    mag.sort()
    
    
    allMediandB.append(mag[int(samplesPerFrame/2)])        #median volume of frame modSFM(i)
    domFreq = freqs[maxindex]
    energy = np.sum(pwr)/len(pwr)
    SFM = mag[int(samplesPerFrame/2)]
    #print('%.2f'%SFM)
    time = i*samplesPerFrame / Fs
    isSpeech = False
    counter = 0    
    #updates counter to determine if frame is speech
    if (domFreq > fThresh): counter+=1
    if (energy > eThresh): counter+=1
    if (SFM > sfmThresh): counter+=1
    if (counter > 1):
        isSpeech = True
        allClass.append([1, time, domFreq, energy/100000, SFM])
    else:
        isSpeecch = False
        allClass.append([0, time, domFreq, energy/100000, SFM])

    #print('Time: ', time, '\n', isSpeech, "\n Energy = ", energy, "\n domFreq = ", domFreq, "\n SFM = ", SFM)
np.set_printoptions(precision=3)
np.set_printoptions(suppress=True)
print(np.matrix(allClass))
np.savetxt('results.txt', np.matrix(allClass), fmt='%.2f')