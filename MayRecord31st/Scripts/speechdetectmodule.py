# -*- coding: utf-8 -*-
"""
Created on Fri May 31 12:09:36 2019

@author: moon

Works on 5 second audio segment inputs. If script sees at least 1 continuous
segment of speech, then it classifies the segment as speech.
"""

import numpy as np
import scipy.fftpack
import scipy.io
from scipy.io import wavfile as wf

def detector(dataPath, params = [43,0,775], frameSize = 0.5):
    Fs, data = wf.read(dataPath)
    T = 1/Fs
    
    ebase = params[0]
    fThresh = params[1]
    fTopThresh = params[2]
    
    eThresh = ebase*(1e8)
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
    #allClass = []
    
    isSpeech = False

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
        #print('%.2f'%SFM)
        #time = i*samplesPerFrame / Fs

        last = isSpeech
        #updates counter to determine if frame is speech
        if (domFreq < fTopThresh) and (energy > eThresh):
            isSpeech = True
            #allClass.append([1, time, energy/(1e8), domFreq, SFM])
            #allClass.append([1, time])
        else:
            isSpeech = False
            #allClass.append([0, time, energy/(1e8), domFreq, SFM])
            #allClass.append([0, time])
        
        if (last and isSpeech):
            return isSpeech
    
        
    #if not os.path.exists(directory):
    #    os.makedirs(directory)
    #np.savetxt('results.txt', np.matrix(allClass), fmt='%.2f')
    #np.savetxt('%se%d_f%d_%d_s%d.csv'%(directory, ebase, fThresh, fTopThresh, sfmThresh), np.matrix(allClass), delimiter = ',', fmt='%.1f')