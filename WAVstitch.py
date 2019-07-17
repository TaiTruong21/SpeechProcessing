"""
7/12/2019

@author: moon

README:
    asldfha
"""

import os
from pydub import AudioSegment

combinationName = 'test'
directory = './exports/'

combined = AudioSegment.empty()

for file in os.listdir('./keyboard only/'):
    if file.endswith('.wav'):
        print(file)
        add = AudioSegment.from_file('./keyboard only/'+file)
        combined += add

if not os.path.exists(directory):
    os.makedirs(directory)
combined.export('./exports/%s.wav'%(combinationName), format = 'wav')