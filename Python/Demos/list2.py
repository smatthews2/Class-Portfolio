#Jo Crandall
#February 2022
#List example file 2.
#Demonstrates slice, append, insert, concatenate



myList = [22, 6, 8, 12, 7, 54]

## indexing
## We can determine the index of an element of the list with myListName.index(value_of_element)
print( myList.index(6))
print( myList.index(54))


## Slicing a list
## We can select not only a single index, but a range of indexes from a list
## format myListName[beginning_index : upper_bound_index]
#print( myList[0] )
#print( myList[0:2] )     ## this is a slice of the list. Notice that we don't reach the last index
                        
#print( myList[0:6])   ## the highest index is 5 though.....
## I can even write:
#print( myList[2:])     ## to get everything starting at index 2 through the end of the list

## also notice that a slice of a list is a list
## The slice can be assigned to its own list
#listSlice = myList[:4]     ## what part of myList is being selected here?
#print(listSlice)


## Appending to a list
## add data to the end of a list
#myList.append(17)
#print(myList)
#myList.append(39)
#print(myList)

## What if I start with an empty list?
#myNewList = []     ## this is an empty list
#print(myNewList)
## now append a value to the empty list
#myNewList.append('cat')
#print(myNewList)


## Inserting into a list
## In C-type languages, inserting into an array is an involved process
## because everything after the insertion point needs to be moved.
## But Python does this for us with myListName.insert(index, value)
#print(myList)
#myList.insert(2, 4)
#print(myList)

#print(myNewList)
#myNewList.insert(0,'llama')
#print(myNewList)


## Remove specific value from a list
#print(myList)
#myList.remove(12)
#print(myList)

## Delete whatever is stored at specific index
#print(myList)
#del myList[3]
#print(myList)


## Concatenate multiple lists
#myAwesomeList = [11, 88, 2]
#print(myList + myAwesomeList)

## I can either put a concatenated list into a new variable, or concatenate to an existing list
#print(myList)
#myList += [11, 88, 2]
#print(myList)


## What if the lists have different data types?
#concatList = myAwesomeList + myNewList
#print(concatList)
#print(type(concatList))
#print(type(concatList[0]))
#print(type(concatList[3]))

## for that matter, what if I try to put different data types in the list in the first place?
#strangeList = ['llama', 3.14, 42, True]
#print(strangeList)
#print(type(strangeList[0]))
#print(type(strangeList[1]))
#print(type(strangeList[2]))
#print(type(strangeList[3]))    ## this behavior shows that Python lists are NOT exactly the same as C arrays!!

## I can print with a for loop as well
#for i in strangeList:
    #print (i)
    
#print(strangeList)


## Negative indexes???
#print(concatList)
#print(concatList[-1])    ## what is happening here
#print(concatList[-3])
