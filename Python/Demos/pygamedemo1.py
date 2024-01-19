# Author: Jo Crandall
# CPSC 215 Intro to Python
# Pygame demo 1 - installing pygame and rendering a circle

# To install pygame in linux, on the command line run: sudo apt install python3-pygame  OR
# install with: python3 -m pip install pygame....or other variants (see https://www.pygame.org/wiki/GettingStarted)

import pygame  ## this line accesses the pygame library we downloaded

pygame.init()  ## initialize the pygame environment

DISPLAYSURF = pygame.display.set_mode((600, 600))  ## set up the window  with size 600x600
    

### set up some colors
### first number is amount of red, second number is amount of green, third is amount of blue (hence, RGB display)
BLACK = (  0,   0,   0)
WHITE = (255, 255, 255)
RED = (255,   0,   0)
GREEN = (  0, 255,   0)
BLUE = (  0,   0, 255)
AQUA = (  0, 128, 128)

## Now let's draw a circle on the DISPLAYSURF we set up
## args = display surface, color, location of center, radius, thickness (0 = total fill)    
pygame.draw.circle(DISPLAYSURF, AQUA, (300, 300), 100, 0)      
 
pygame.display.update()  ## this is what makes the circle actually appear on the screen
     

## in order to keep the display going, we put it in a loop
while True:
    pygame.display.update()
