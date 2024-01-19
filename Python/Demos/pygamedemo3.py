# Jo Crandall
# GU - Spring 2022
# pygame basics


import pygame as pg
#from pygame.locals import *

##some links I've used in past years - may or may not be active:)
#https://dr0id.bitbucket.io/legacy/pygame_tutorial00.html
#https://inventwithpython.com/pygame
#https://nerdparadise.com/programming/pygame

def main():
    ### initialize the pygame module
    pg.init()
    
     
    ### create a surface on screen that has the size of 240 x 180
    #screen = pg.display.set_mode((240,180))

    #screen = pg.display.set_mode((800,800))

    ### set up the window

    DISPLAYSURF = pg.display.set_mode((600, 600), 0, 32)
    

    ### set up the colors
    BLACK = (  0,   0,   0)
    WHITE = (255, 255, 255)
    RED = (255,   0,   0)
    GREEN = (  0, 255,   0)
    BLUE = (  0,   0, 255)
    AQUA = (  0, 128, 128)

    ### draw on the surface object

    ## We introduce CONDITIONAL logic into our code:
    userVar = int(input('Enter an integer'))  ## get a number from the user

    if (userVar % 2 == 0):    ## if the user's number is even...
        colorVar = AQUA   ## set color variable to aqua
    else:                   ## otherwise...
        colorVar = RED      ## set color variable to red
    
    #pg.draw.polygon()
    #pg.draw.circle()
    ## Now let's draw shapes on the DISPLAYSURF we set up
    ## circle args = display surface, color, location of center, radius, thickness (0 = total fill)
    pg.draw.circle(DISPLAYSURF, colorVar, (400, 150), 40, 0)

     

     
    ### define a variable to control the main loop
    running = True
     
    # main loop
    while running:
        # event handling, gets all events from the event queue
        for event in pg.event.get():
            # only do something if the event is of type QUIT
            if event.type == pg.QUIT:   ##if the 'X' icon on the window is clicked...
                # change the value to False, to exit the main loop
                running = False
        pg.display.update()
     
# run the main function only if this module is executed as the main script
# (if you import this as a module then nothing is executed)
if __name__=="__main__":
    # call the main function
    main()
