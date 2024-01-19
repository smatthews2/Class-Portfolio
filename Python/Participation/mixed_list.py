## Participation activity
## Separate this mixed-type list into multiple lists
## set up an empty list for each data type
## Traverse the list with a for loop and use an if statement to check the type
## Append each element to the correct data type list

# mixedList = ['snake', 3.14, 42, True, 'llama', False, 2.71, 'dog', 'cat', 2, 19, 17.1]

# strList = []
# floatList = []
# intList = []
# boolList = []

# for x in mixedList:
#     if (type(x) == type('a')):
#         strList.append(x)
#     if (type(x) == type(1)):
#         intList.append(x)
#     if (type(x) == type(1.0)):
#         floatList.append(x)
#     if (type(x)) == type(True):
#         boolList.append(x)

# print('', strList, '\n', intList, '\n', floatList, '\n', boolList)

## Now write a function that accepts an unordered list and returns the ordered version of the list
## DO NOT use Python's 'sort' method to do this - implement it yourself
## Then run each of the sublists just created through your list-sorting function (it should work for all the data types)

unorderedList = [10, 50, 20, 30, 2, 8, 4]

# Bad code no worky!

# def swapNum(num1 , num2):
#     if num1 < num2:
#         temp = num2
#         unorderedList[unorderedList.index(num2)] = num1 
#         unorderedList[unorderedList.index(num1)] = temp

# def selSort():
#     for start in range(0, len(unorderedList) - 1):
#         swapNum(unorderedList[start], unorderedList[start + 1])
#         print(unorderedList, ': ', start)
#         if(unorderedList[0] > unorderedList[1] and unorderedList[1] > unorderedList[2] and unorderedList[2] > unorderedList[3]):
#             break

def sortMyList(mode):
    minNum = unorderedList[0]
    length = len(unorderedList)
    orderedList = []
    if mode == 0:
        for i in range(length):
            for j in unorderedList:
                if minNum > j:
                    minNum = j
            orderedList.append(minNum)
            unorderedList.remove(minNum)
            if len(unorderedList) != 0:
                minNum = unorderedList[0]
        return orderedList
    else:
        for i in range(length):
            for j in unorderedList:
                if minNum < j:
                    minNum = j
            orderedList.append(minNum)
            unorderedList.remove(minNum)
            if len(unorderedList) != 0:
                minNum = unorderedList[0]
        return orderedList
            

print('sortMylist:', sortMyList(1))
# selSort()
# selSort()            
