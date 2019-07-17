# -*- coding: utf-8 -*-
"""
Created on Wed Jul 17 13:54:59 2019

@author: nihar
"""

from pydub import AudioSegment
import os

directory = './MoonSplit/'

orig = AudioSegment.from_file('./exports/MoonCombo.wav', format='wav')

if not os.path.exists(directory):
    os.makedirs(directory)
    
for i, chunk in enumerate(orig[::5000]):
    with open('%sMoon5SecSeg-%s.wav'%(directory, i+1), 'wb') as f:
        chunk.export(f, format='wav')