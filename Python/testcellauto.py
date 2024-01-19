import numpy as np
from cellauto import cell_auto # We need to import our module that actually has the class we want.

# WARNING: YOU PROBABLY SHOULDN'T RUN THIS IF YOU'RE PHOTOSENSITIVE.
def update():
    image = np.random.random((1200,800,3)) * 255 # Random produces an array of values between [0.0, 1.0), so we multiply that by 255 for the color range.
    return image.astype('uint8') # And we return this random array with unsigned 8-bit integer values to produce random colors.

instance = cell_auto(update, (1200, 800)) # We pass our update function over to the class we made in the other file...

instance.start() # ...and run it.
