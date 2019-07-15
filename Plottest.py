def compare(SAMPLING_RATE= 44100,):
    import numpy as np
    import matplotlib.pyplot as plt
    import struct
    import scipy.io.wavfile as wav
    import os
    import time
    from IPython.display import clear_output
    from Scripts import speechrate
    from playsound import playsound
    plt.ion()

    print(os.getcwd())
    while not os.path.exists("Scripts\\mic001.raw"):
        time.sleep(1)
    print("First file created!")
    print("Entering loop...\n")
    filecount =1
    ratelog = np.zeros(filecount)
    while True:
        try:
            # Get file size
            fileSize = os.path.getsize('Scripts\\mic%03d.raw' %filecount)//4
            FILE_DURATION = fileSize/SAMPLING_RATE #second
            # Check if file is broken or corrupted 
            if fileSize < FILE_DURATION*SAMPLING_RATE:
                print("File is smaller than what it should be")
                raise IOError("corrupted")
        
            # Initialize numpy array
            fileData = np.zeros(fileSize, dtype= np.float16)
        
            with open("Scripts\\mic%03d.raw" %filecount, "rb") as f:
                print("Reading file mic%03d.raw" %filecount)
                x=0
                while x<fileSize:
                    try:
                        # Unpack the bytes into float and store result in array
                        fileData[x] = struct.unpack('f', f.read(4))[0]
                        x = x+1
                    except:
                        continue
            wav.write("waveFiles\\rec%03d.wav" %filecount,SAMPLING_RATE,filefata)
            sprate = speechrate.getrate(filecount=filecount,wave_file = "wavFiles\\rec%03d.wav" %filecount)
            ratelog[filecount-1] = sprate
            print("rate of speech: " .format(sprate))
            filecount = filecount + 1
            clear_output(wait=True)
            ratelog = np.zeros(filecount)
            
            # Wait for the file to be recorded
            time.sleep(FILE_DURATION+0.1)
        except IOError as e:
            # Catch broken files and inexistent file errors and exit
            print("IOError: " + str(e)) # print error to see what caused it
            print("Exiting...")
            print(ratelog) #note: disregard first index
            #cleanUp()
            break
    #def cleanUp():
        #my_dir = "wavFiles\\"
        #for fname in os.listdir(my_dir):
            #if fname.startswith("rec"):
                #os.remove(os.path.join(my_dir,fname))
        #my_dir = "Scripts\\"
        #for fname in os.listdir(my_dir):
            #if fname.startwith("mic"):
                #os.remove(os.path.join(my_dir,fname))
    #cleanUp()
    return sprate
