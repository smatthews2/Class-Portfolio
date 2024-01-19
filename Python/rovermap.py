#   Author: Sebastian Matthews
#   CPSC 215 PA9: Mars Rover
#   April 25, 2022
#   Gonzaga University
#   This program allows the user to control a rover in order to find water on the surface of Mars, with the rover able to perform the following four actions:
#       1. Take a sample of the surface to measure the rust content.
#       2. Move forward.
#       3. Rotate left or right.
#       4. Charge its battery.   

from os import system
from time import sleep

## Mars Rover map generator function

def generateMap(seedrow, seedcol):
    #generate an empty map (all rust values are zero)
    map = [[0] * 20, [0] * 20, [0] * 20, [0] * 20, [0] * 20,
           [0] * 20, [0] * 20, [0] * 20, [0] * 20, [0] * 20,
           [0] * 20, [0] * 20, [0] * 20, [0] * 20, [0] * 20,
           [0] * 20, [0] * 20, [0] * 20, [0] * 20, [0] * 20]
    map[seedrow][seedcol] = 99  #value 99 is water
    for i in range(1, 6):
        for j in range(seedrow - i, seedrow + i + 1):
            for k in range(seedcol - i, seedcol + i + 1):
                if(j >= 0 and j < 20 and k >= 0 and k < 20):
                    if(map[j][k] == 0):
                        map[j][k] = 2**(5-i)
    
    return map

# calling the function this way will produce a map with the water located at coords 5,5 and
# rust levels decreasing outward to zero from that location:        
map = generateMap(5,5)

class Sampler:
    def __init__(self):
        self.samSlots = []
        self.numAvail = 7

    def collect(self, coords, rustVal):
        collectInfo = {'samLoc': coords, 'rustVal': rustVal}
        if(self.numAvail != 0):
            self.samSlots.append(collectInfo)
            self.numAvail -= 1
            print('Coordinates:', str(collectInfo['samLoc']) + '\n' + 'Rust Value:', str(collectInfo['rustVal']) + '\n' + str(self.numAvail), 'slots left.')
            sleep(1)
        else:
            print('Sampler full.\n')
        
class Rover:
    def __init__(self, initCoords: tuple, initDir: str):
        self.curLoc = initCoords
        self.facing = initDir
        self.battery = 10
        self.samObj = Sampler() # We have to initialize the Sampler class in the sampler object.
    
    def takeSample(self):
        if(self.battery >= 1):
            self.samObj.collect(self.curLoc, map[self.curLoc[0]][self.curLoc[1]]) # We take a sample of the surface from the map with the rust values.
        else:
            self.dead()

    def moveForward(self):
        if(self.battery > 1):
            if(self.facing == 'north'):
                self.curLoc = self.curLoc[0] - 1, self.curLoc[1] 
            elif(self.facing == 'east'):
                self.curLoc = self.curLoc[0], self.curLoc[1] + 1
            elif(self.facing == 'south'):
                self.curLoc = self.curLoc[0] + 1, self.curLoc[1] 
            elif(self.facing == 'west'):
                self.curLoc = self.curLoc[0], self.curLoc[1] - 1
            print('Now in', str(self.curLoc) + '.')
            self.battery -= 2
        else:
            self.dead()

    def rotateRight(self):
        if(self.battery > 1):
            if(self.facing == 'north'):
                self.facing = 'east'
            elif(self.facing == 'east'):
                self.facing = 'south'
            elif(self.facing == 'south'):
                self.facing = 'west'
            elif(self.facing == 'west'):
                self.facing = 'north'
            print('Now facing', self.facing + '.')
            self.battery -= 1
        else:
            self.dead()

    def rotateLeft(self):
        if(self.battery > 1):
            if(self.facing == 'north'):
                self.facing = 'west'
            elif(self.facing == 'west'):
                self.facing = 'south'
            elif(self.facing == 'south'):
                self.facing = 'east'
            elif(self.facing == 'east'):
                self.facing = 'north'
            print('Now facing', self.facing + '.')
            self.battery -= 1
        else:
            self.dead()

    def charge(self):
        if(self.battery < 15):
            self.battery += 1
            print('Now at', self.battery, 'units of power.')
        else:
            print('Max battery reached.\n')

    def dead(self):
        print('Out of battery.')


def main():
    rover = Rover((10, 10), 'north') # Create an instance of a rover.
    
    # We create a blank map for the user.
    rovmap = [['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20,
            ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20,
            ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20,
            ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20, ['-'] * 20]
    rovmap[rover.curLoc[0]][rover.curLoc[1]] = 'X'
    prev = rover.curLoc[0], rover.curLoc[1]

    for i in rovmap:
        print(i)
    
    while True: # This loop manages the decision structure of the game.
        userInput = int(input('What would you like to do? Enter a number corresponding with the desired action...\n1. Take Sample\n2. Move Forward\n3. Rotate Left or Right\n4. Recharge\n'))
        if(userInput == 1):
            rover.takeSample()
        elif(userInput == 2):
            rover.moveForward()
        elif(userInput == 3):
            userInput = input('Left or right? Enter in all lowercase\n')
            if(userInput == 'left'):
                rover.rotateLeft()
            if(userInput == 'right'):
                rover.rotateRight()
        elif(userInput == 4):
            rover.charge()
        
        for i in rover.samObj.samSlots: # We check if our win condition is met, which is if our sampler has a rust value of 99.
            if(i['rustVal'] == 99):
                print('You win!')
                return 0
        
        if(rover.samObj.numAvail == 0): # And we check if we still have sampler spaces left, that being our lose condition.
            print('You lose!')
            return 0
        
        sleep(1)
        system('clear')
        
        rovmap[prev[0]][prev[1]] = '-' # Erase the X...
        rovmap[rover.curLoc[0]][rover.curLoc[1]] = 'X' # ...and redraw it in its new location.
        for i in rovmap:
            print(i)
        prev = rover.curLoc[0], rover.curLoc[1]

main()