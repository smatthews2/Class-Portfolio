
def doubleNum(int):
    int *= 2
    return int

inFile = open("nums.txt", 'r')
outFile = open("doublednums.txt", 'w')

for inNum in inFile:
    nNum = doubleNum(int(inNum))
   
    outFile.write(str(nNum) + '\n')

inFile.close()
outFile.close()