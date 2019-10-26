def compare(SAMPLING_RATE= 44100):
    import numpy as np
    import os
    import datetime
    from IPython.display import clear_output
    #from Scripts import speechrate
    from Scripts import speechrate
    import time
    #from Scripts import speechdetectmodule as sdm
    from Scripts import speechdetectmodule as sdm
    import soundfile as sf
    import csv
    import keyboard

    print(os.getcwd())
    print('Hold q to exit')
    while not os.path.exists("Scripts\\mic10001.raw"):
        time.sleep(1)
    print("First file created!")
    print("Entering loop...\n")
    filecount = 1
    sprate = 0
    rates = [0]
    Volthres = 70
    print(rates)
    
    while True:
        try:
            # Get file size
            current = time.time()
            print(datetime.datetime.now())
            fileSize = os.path.getsize('Scripts\\mic10%03d.raw' %filecount)//4
            FILE_DURATION = fileSize/SAMPLING_RATE #second
            # Check if file is broken or corrupted 
            if fileSize < FILE_DURATION*SAMPLING_RATE:
                print("File is smaller than what it should be")
                raise IOError("corrupted")

            # Initialize numpy array
    #             fileData = np.zeros(fileSize, dtype= np.float16)

    #             with open("Scripts\\mic10%03d.raw" %filecount, "rb") as f:
    #                 print("Reading file mic10%03d.raw" %filecount)
    #                 x=0
    #                 while x<fileSize:
    #                     try:
    #                         # Unpack the bytes into float and store result in array
    #                         fileData[x] = struct.unpack('f', f.read(4))[0]
    #                         x = x+1
    #                     except:
    #                         continue
            #wav.write("waveFiles\\rec10%03d.wav" %filecount,SAMPLING_RATE,fileData)

            
            data, samplerate = sf.read('./Scripts/mic10%03d.raw'%filecount, channels =1, samplerate = SAMPLING_RATE, subtype = 'FLOAT')
            sf.write('./wavFiles/rec10%03d.wav' %filecount, data, samplerate)
            
            analysis = sdm.detect5sec("C:\\Users\\truon\\Desktop\\MayRecord31st\\MayRecord31st\\wavFiles\\rec10%03d.wav" %filecount)
           
            
            if analysis['speech']:
                sprate = speechrate.getrate(filecount=filecount,wave_file = "wavFiles\\rec10%03d.wav" %filecount)
                print("rate of speech" , sprate)
                rates[-1] = sprate
            if analysis['vol']> Volthres:
                print('Too loud')
                
            with open('ROS.csv', 'w') as file:
                writer = csv.writer(file)
                print(rates)
                writer.writerow(rates)
#             file = open("text.txt",'w')
#             file.write('%f' % sprate)
#             filecount = filecount 
#             while not os.path.exists("Scripts\\mic10%03d.raw" %(filecount+1)):
#                 time.sleep(1)
            
            if keyboard.is_pressed('q'):
                break          
                
               
#             #clear_output(wait=True)
#             runtime = time.time() - current

#             # Wait for the file to be recorded

#             if ((runtime)>5):
#                 time.sleep(FILE_DURATION)
#             else:
#                 print("runtime:",runtime)
#                 time.sleep(FILE_DURATION - 0.987*(runtime)+.2)
#             while not os.path.exists("Scripts\\mic10%03d.raw" %(filecount+1)):
#                 time.sleep(.0001) 
                
#         except IOError as e:
#             # Catch broken files and inexistent file errors and exit
#             print("IOError: " + str(e)) # print error to see what caused it
#             print("Exiting...")
#             #cleanUp()
#             break
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
        except:
            pass
    return
