import pygame as pg ## This line accesses the pygame library we downloaded.

class cell_auto:
    def __init__(self, update_func, display_size):
       pg.init()  ## We initialize the pygame environment...
       self.update_func = update_func
       self.DISPLAYSURF = pg.display.set_mode((display_size))  ## ...and set up the window with a given size(preferably 600x600)
    
    def set_title(self, title):
        pg.display.set_caption(title)

    def start(self):
        self.set_title('WOAH! Colors?') # Give the window a title.

        while True:
            for event in pg.event.get():
                if event.type == pg.QUIT:
                    pg.quit() # Exit the program, without an error message.
                    return
            
            cells = self.update_func() # We're updating the "cells" with our update function in the test file.
            surf = pg.surfarray.make_surface(cells)
            self.DISPLAYSURF.blit(surf, (0, 0)) # Draw it to the screen.

            pg.display.update()