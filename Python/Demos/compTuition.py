#This function computes tuition cost.
#Input: num credits as integer, in state status as boolean
#Ouput: tuition cost as float

INSTATECRED = 500       ## I am using these as 'constants'
OUTSTATECRED = 650

def compTuition(credits, inState):
    if (inState):
        if (credits < 15):
            cost = INSTATECRED * credits
        else:
            cost = INSTATECRED * 15
    else:
        if (credits < 15):
            cost = OUTSTATECRED * credits
        else:
            cost = OUTSTATECRED * 15
    return cost


def anotherFunction():
    print('Another function has run')