# This function counts the number of values in a list that are over three
# Argument: list of numerical values
# Return: number of values over three
def valsOverThree(inList):
    vals = 0
    for i in inList:
        if (i > 3):
            vals += 1
    return vals

# This function says whether a number is equal to three
# Argument: single numerical value
# Return: boolean, true if number is equal to three
def valIsThree(inNum):
    if (inNum == 3):
        return True
    else:
        return False
