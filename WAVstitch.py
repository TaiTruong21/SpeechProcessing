"""
7/12/2019

@author: moon

README:
    asldfha
"""

import os
from pydub import AudioSegment

combinationName = 'TaiMoonNoisy'
directory = './exports/'
sourceDir = './RealTestAudioSetting/'

combined = AudioSegment.empty()

for file in os.listdir(sourceDir):
    if file.endswith('.wav'):
        print(file)
        add = AudioSegment.from_file(sourceDir+file)
        combined += add

if not os.path.exists(directory):
    os.makedirs(directory)
combined.export('%s%s.wav'%(directory, combinationName), format = 'wav')