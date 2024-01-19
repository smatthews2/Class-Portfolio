#!/usr/bin/env python2

import pygame as pg
from pygame.locals import *

#https://dr0id.bitbucket.io/legacy/pygame_tutorial00.html
#https://inventwithpython.com/pygame
#https://nerdparadise.com/programming/pygame

def drawBrick(displaySurface, color, location):
    # pg.draw.rect(displaySurface, color, (100, 150, 100, 50))
    pg.draw.rect(displaySurface, color, (location, location + 50, 100, 50), 0)

def main():
    # initialize the pygame module
    pg.init()
    
    # set up the window
    DISPLAYSURF = pg.display.set_mode((600, 600))
    pg.display.set_caption('An Awesome Demo!')   # You can change the caption...

    # set up some colors
    BLACK = (  0,   0,   0)
    WHITE = (255, 255, 255)
    RED = (255,   0,   0)
    GREEN = (  0, 255,   0)
    BLUE = (  0,   0, 255)
    AQUA = (  0, 128, 128)

    # the display surface defaults to black
    # color the background of the surface object a different color
    DISPLAYSURF.fill(WHITE)
    
    # We can literally draw one pixel at a time using PixelArray()
    pixObj = pg.PixelArray(DISPLAYSURF)
    # pixObj[480][380] = BLACK    # this colors the pixel at 480, 380 black
    # pixObj[482][382] = BLACK
    # pixObj[484][384] = BLACK
    # pixObj[486][386] = BLACK
    # pixObj[488][388] = BLACK
    
    # Or we can use PixelArray() to affect a range of pixels
    pxarray = pg.PixelArray(DISPLAYSURF)
    #pxarray[0:25, 0:45] = BLACK    # what is this doing?
    pxarray[::5, ::5] = BLACK      # what is this doing?

    ### more of our favorite shapes
    #pg.draw.ellipse(DISPLAYSURF, RED, (300, 250, 40, 80), 3)
    #pg.draw.rect(DISPLAYSURF, RED, (200, 150, 100, 50), 0)
    #pg.draw.polygon(DISPLAYSURF, GREEN, ((146, 0), (291, 106), (236, 277), (56, 277), (0, 106)), 0)  
     
    # define a variable to control the main loop
    running = True
     
    # main loop
    i = 0
    while running:
        # event handling, gets all event from the event queue
        for event in pg.event.get():
            # only do something if the event is of type QUIT
            if event.type == pg.QUIT:
                # change the value to False, to exit the main loop
                running = False
            if event.type == pg.KEYDOWN:
                # drawBrick()
                # drawBrick(DISPLAYSURF, RED, 0)
                drawBrick(DISPLAYSURF, RED, i)
                i += 50
        pg.display.update()
     

# run the main function only if this module is executed as the main script
# (if you import this as a module then nothing is executed)
if __name__=="__main__":
    # call the main function
    main()
