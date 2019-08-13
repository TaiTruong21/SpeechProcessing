# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 16:04:11 2019

@author: moon
"""

import os

i = 0
while True:
    vidCap = 'mldb capture video -t 5 rectest%d.mp4'%i
    os.system(vidCap)
    print('recording %d made'%i)
    i += 1
    if i > 3:
        break

