#Jo Crandall
#March 2022
#Gonzaga University
#matplotlib.pyplot has many useful funcions: plot(), subplot(), scatter(), bar(), pie(), hist()

#install matplotlib if needed with sudo apt install python3-matplotlib  OR python3 -m pip install matplotlib

import matplotlib.pyplot as plt
import numpy as np
import math #sqrt()

def plotLine():
    plt.plot([0, 1],[0, 1]) #the two list argument are the x-coordinates list and the y-coordinates list
    ## or using numpy array (most common):
    #plt.plot(np.array([0,1]), np.array([0,1]))
    ## but it's convenient to capture the data in variables for easier updating:
    # xcoords = np.array([0,1])
    # ycoords = np.array([0,1])
    # plt.plot(xcoords, ycoords)
    ## try changing the sets of coordinates to be plotted
    plt.show() #without this, we won't see the graph rendered

def plotPoints():
    #plt.plot([0,1], [0,1], 'o')
    #plt.plot(np.array([0,1]), np.array([0,1]), 'o')
    xcoords = np.array([0,1])
    ycoords = np.array([0,1])
    plt.plot(xcoords, ycoords, 'o')
    plt.show()

def plotWithFeatures():
    xcoords = np.array([0,1,5])
    ycoords = np.array([2,1,3])
    plt.plot(xcoords, ycoords, marker = 'o')  # try with marker = 's', 'D', '^'  There are several others available
    #plt.plot(xcoords, ycoords, linestyle = '--')  # try with linestyle = ':', '-'  There are several others available
    #plt.plot(xcoords, ycoords, color = 'y')  # try with colorr = 'b', 'g'  There are several others available
    ## try putting multiple features together
    #plt.plot(xcoords, ycoords, color = 'y', marker = 'D', linestyle = ':')
    ## note this can also be done more compactly:
    #plt.plot(xcoords, ycoords, 'D:y')    # marker, linestyle, color in that order
    #plt.plot(xcoords, ycoords, 'o-b', linewidth = 5)
    plt.show() #without this, we won't see the graph rendered

def plotMultiple():
    xcoords1 = np.array([0,1,5])
    ycoords1 = np.array([2,1,3])
    xcoords2 = np.array([2,7,8])
    ycoords2 = np.array([3,1,6])
    # plt.plot(xcoords1, ycoords1, color = 'b')
    # plt.plot(xcoords1, ycoords2, color = 'r')
    ## OR
    #plt.plot(xcoords1, ycoords1, xcoords1, ycoords2) #note matplotlib automatically gave them separate colors
    ## If you want the plots in separate graphs:
    plt.subplot(2,1,1) #2 rows, 1 column, 1st plot
    plt.plot(xcoords1, ycoords1, 'o:y')
    plt.subplot(2,1,2) #2 rows, 1 column, 2nd plot
    plt.plot(xcoords2, ycoords2, 'o:b')
    plt.show()

def plotWithLabels():
    xcoords1 = np.array([0,1,5])
    ycoords1 = np.array([2,1,3])
    xcoords2 = np.array([2,7,8])
    ycoords2 = np.array([3,1,6])
    plt.plot(xcoords1, ycoords1)
    plt.title('These are lines!')
    plt.xlabel('Some x axis label')
    plt.ylabel('Some y axis label')
    #plt.grid()  ## turn on grid lines, you can set color, linestyle, linewidth for these too
    plt.show()

def plotFunction():
    xcoords = np.arange(0,5,.5)
    print(xcoords)
    ycoords = np.zeros(10)
    print(ycoords)
    index = 0
    for i in xcoords:
        ycoords[index] = math.sqrt(i)
        index += 1
    print(ycoords)
    plt.plot(xcoords, ycoords)
    plt.show()

def plotMultWithLabels():
    xcoords1 = np.array([0,1,5])
    ycoords1 = np.array([2,1,3])
    xcoords2 = np.array([2,7,8])
    ycoords2 = np.array([3,1,6])
    ## the first plot and its features:
    plt.subplot(1,2,1) #1 row, 2 columns, 1st plot
    plt.plot(xcoords1, ycoords1, 'o:y')
    plt.title('First plot')
    plt.xlabel('Python')
    plt.ylabel('Coolness levels')
    ## the second plot and its features:
    plt.subplot(1,2,2) #1 row, 2 columns, 2nd plot
    plt.plot(xcoords2, ycoords2, 'o:b')
    plt.title('Second plot')
    plt.xlabel('C++')
    plt.ylabel('Coolness levels')
    plt.show()

def main():
    plotLine()
    #plotPoints()
    #plotWithFeatures()
    #plotMultiple()
    #plotWithLabels()
    #plotFunction()
    #plotMultWithLabels()
    

main()