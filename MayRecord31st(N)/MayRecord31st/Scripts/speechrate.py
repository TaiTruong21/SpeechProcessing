def getrate(filecount,wave_file="C:\\Users\\truon\\Desktop\\MayRecord31st\\MayRecord31st\\", silencedb = -25, mindip = 2, minpause = 0.3, min_sounding_int = 0.1):
    #wave_file??? --^
    '''

    '''
    import numpy as np
    import parselmouth
    from parselmouth.praat import call
    import math
    import matplotlib.pyplot as plt

    snd = parselmouth.Sound(wave_file)
    originaldur= call(snd, 'Get total duration')
    #plt.plot(snd.xs(), snd.values.T, linewidth=3, color='w')
    #plt.plot(snd.xs(), snd.values.T, linewidth=1)
    #plt.grid(False)
    #plt.ylabel("Sound [Pascal]")
    #plt.xlim([snd.xmin, snd.xmax])
    #plt.savefig("wavFiles\\soundPic\\soundpic%03d.jpeg" %filecount)
    #plt.show()
    

    intid = call(snd, 'To Intensity', 50,0, 'yes')
    #calculate threshold
    minint = call(intid,'Get minimum', 0,0, 'Parabolic')
    maxint = call(intid,'Get maximum', 0,0, 'Parabolic')
    max99int  = call(intid,'Get quantile', 0,0, 0.99)

    threshold = max99int + silencedb
    threshold2 = maxint - max99int
    threshold3 = silencedb - threshold2
    

    if threshold < minint:
        threshold = minint
    # get pauses (silences) and speakingtime
    txt = call(intid, 'To TextGrid (silences)', threshold3, minpause, 0.1, 'silent', 'sounding')
    silencetierid = call(txt, 'Extract one tier',1)
    silencetable = call(silencetierid, 'Down to Table',"no",6,"yes", "no")
    silencetableid = call(silencetable, 'Down to TableOfReal', 'sounding')
    nsounding = call(silencetableid,'Get number of rows')
    npauses = 'nsounding'
    #create matrix
    matid = call(intid,'Down to Matrix')
    #convert intensity to sound
    sndintid = call(matid,'To Sound (slice)', 1)

    intdur = (sndintid, 'Get total duration')
    intmax = (sndintid, 'Get max', 0,0,'Parabolic')
    #estimate peak positions
    ppid = call(sndintid, 'To PointProcess (extrema)', 'Left', 'yes', 'no', 'Sinc70')
    numpeaks = call(ppid, 'Get number of points')
    
    print("numpeaks: ", format(numpeaks)); # what happen if the interval only pick up one peak??
    
    if numpeaks == 1 or numpeaks == 0:
        speakingrate = 0;
        return speakingrate
    
    #fill array with time points
    t = np.zeros(numpeaks)
    for i in range (1,numpeaks):
        t[i] = call(ppid, 'Get time from index', i)
    
    #fill array with intensity values
    peakcount =0
    intensity = np.zeros(numpeaks)
    timepeaks = np.zeros(numpeaks)
    for i in range (1,numpeaks):
        value = call(sndintid, 'Get value at time', t[i], 'Cubic')
        if value > threshold:
            peakcount +=1
            intensity[peakcount] = value
            timepeaks[peakcount] = t[i]
    # print("peakcount: {}".format(peakcount))
        
    #lastly, filter out the invalid peaks
    validpeakcount = 0
    currenttime = timepeaks[1]
    currentint = intensity[1]
    validtime = np.zeros(len(timepeaks))
    for p in range (1,peakcount):
        following = p+1
        followingtime = timepeaks[following]

        dip = call(sndintid ,'Get minimum', currenttime, followingtime, 'Cubic' )
        diffint = abs(currentint-dip)

        if diffint>mindip:
            validpeakcount +=1
            validtime[validpeakcount]=timepeaks[p]

        currenttime = timepeaks[following]
        currentint = call(intid, 'Get value at time', timepeaks[following], 'Cubic')
        # print(currentint)
    #print("validpeakcount: {}".format(validpeakcount))

    pitchid = call(snd, 'To Pitch (ac)', 0.02, 30, 4, 'no', 0.03, 0.25, 0.01, 0.35, 0.25, 450)
    voicedcount = 0
    voicedpeak = np.zeros(validpeakcount+1)
    for i in range (1, validpeakcount+1):
        querytime = validtime[i]

        whichinterval = call(txt, 'Get interval at time', 1, querytime)
        whichLabel = call(txt, 'Get label of interval', 1, whichinterval)
        # print(whichLabel)
        value = call(pitchid, 'Get value at time', querytime, 'Hertz', 'Linear')
        # print(value)
    #     if math.isnan(value) is False :
        if not math.isnan(value) :
          if whichLabel == "sounding":
    #           print(value)
    #           print(whichLabel)
              voicedcount = voicedcount+1
              voicedpeak[voicedcount] = validtime[i]
    
    print("Number of syllables: {}".format(voicedcount))
   
    #print("original duration: {}".format(originaldur))
    speakingrate = voicedcount/originaldur
    # print("speakingrate: {}".format(speakingrate))

    return speakingrate
  
