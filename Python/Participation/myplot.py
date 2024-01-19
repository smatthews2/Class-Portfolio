import matplotlib.pyplot as plt
import numpy as np
import math #pow()

def xpow(start, stop, step, pow):
    xcoords = np.arange(start, stop, step)
    numcoords = (stop - start)//step
    ycoords = np.zeros(numcoords)
    index = 0
    for i in xcoords:
        ycoords[index] = math.pow(i, pow)
        index += 1
    plt.plot(xcoords, ycoords)
    plt.show()

def main():
    for i in range(1, 5):
        xpow(-5, 5, 1, i)

main()