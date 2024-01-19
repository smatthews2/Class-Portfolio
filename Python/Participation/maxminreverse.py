unorderedList = [10, 50, 20, 30, 2, 8, 4]

def maxandminNum():
    smallestNum = biggestNum = unorderedList[0]
    for i in unorderedList:
        if biggestNum < i:
            biggestNum = i
        if smallestNum > i:
            smallestNum = i
    return biggestNum, smallestNum

def reverseList():
    reversedList = []
    for j in unorderedList:
        if len(unorderedList) != 0:
            lastEle = unorderedList[len(unorderedList) - (1 + unorderedList.index(j))]
            reversedList.append(lastEle)
    return reversedList
        

print('Max and Min:', maxandminNum(), '\nReversed list:', reverseList())
