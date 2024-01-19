## Functions module for list4.py

# The appendFour() function appends a 4 to a list
def appendFourAndReturn(inList):
    print('Here is the address of the list in the append and return func: \t', hex(id(inList)))
    print('Here is the address of the first element in inList in append and return func: ', hex(id(inList[0])))
    inList.append(4)
    return inList

def appendFourWithoutReturn(inList):
    print('Here is the address of the list in the append w/out return func: ', hex(id(inList)))
    print('Here is the address of the first element in inList in append w/out return func: ', hex(id(inList[0])))
    inList.append(4)


# Function to delete element in fourth index
def deleteFourthIndex(inList):
    inList.pop(3) # Python is a zero-index language, so 4 is 3; 0, 1, 2, 3.

# Function to remove data element 4 if found in list
def removeFour(inList):
    inList.remove(4)

# Function to concatenate four copies of the list
def copyFourTimes(inList):
    inList *= 4

# Function to multiply every element by 4
def multByFour(inList):
    for i in range(len(inList)):  ## What's this??
        inList[i] *= 4

# Function to delete everything from the fourth index onward
def sliceFour(inList):
    del inList[4:]
    