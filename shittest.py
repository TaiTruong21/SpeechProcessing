# -*- coding: utf-8 -*-
"""
Created on Sat Jul 27 14:16:01 2019

@author: nihar
"""

import csv

with open('asdflashdf.csv') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        print(row)