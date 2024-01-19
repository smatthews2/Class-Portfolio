
from cmath import sqrt

def distance(x1, y1, x2, y2):
    dist = sqrt(((x2 - x1)**2) + ((y2 - y1)**2))
    return round(dist.real, 2)