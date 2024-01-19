#Jo Crandall
#February 2022
#Numpy Arrays
#Demonstrates zeros, ones, full, eye, slice, math on arrays, append, insert, delete

# a numpy array is not a list, but behaves more like an array in C/C++
# every element is the same data type

#to install numpy pip3 install numpy  OR ........

import numpy

#list -> myList = [22, 6, 8, 12, 7, 54]
myArray = numpy.array([22, 6, 8, 12, 7, 54])     # 1D or rank 1 or has one 'axis'
my2DArray = numpy.array([[1, 2, 3],[4, 5, 6]])  # 2D or rank 2 or has two 'axes'

### WRITE YOUR OWN 1D AND 2D ARRAYS

## we can have arrays of other data types - you should experiment with this
myStrArray = numpy.array(['cat', 'dog', 'llama'])

## indexing is the same or similar
print(myArray[2])
print(my2DArray[1][1])
print(my2DArray[1, 1])

## Slicing an array is the same or similar
## We can select not only a single index, but a range of indexes from an array
## format myArrayName[beginning_index : upper_bound_index]
print( myArray[0:2] )     ## this is a slice of the array. Notice that we don't reach the last index
                        
print( myArray[0:6])   ## the highest index is 5 .....
## I can even write:
print( myArray[2:])     ## to get everything starting at index 2 through the end of the array

## Slicing in a 2D array
print(my2DArray[:, :1])

### ASSIGN A SLICE OF YOUR 2D ARRAY TO A NEW ARRAY

## What if I start with an empty array?
myNewArray = []     ## this is an empty array
print(myNewArray)

## Appending to an array
## add data to the end of an array
#list -> myList.append(17)
# numpy.append(<arrayname>, <data>, <axis>)
print(myArray)
newArray = numpy.append(myArray, [99])
print(newArray)

print(my2DArray)
new2DArray = numpy.append(my2DArray, [[7, 8, 9]], axis = 0)  ##axis = 0 means append along the first dimension of the array
print(new2DArray)

### APPEND A NEW ROW OF 5'S TO YOUR 2D ARRAY

## Inserting into an array
## list -> myListName.insert(index, value)
# numpy.insert(<arrayname>, <index>, <data>, <axis>)
print(newArray)
newerArray = numpy.insert(newArray, 3, 17)
print(newerArray)

# inserting to a multi-dimensional array
print(new2DArray)
newer2DArray = numpy.insert(new2DArray, 1, 17, axis = 0)   #try with both axis = 0 and axis = 1
print(newer2DArray)

### INSERT A COLUMN OF 7'S INTO YOUR 2D ARRAY

## Delete whatever is stored at specific index
#list -> del myList[3]
# numpy.delete(<arrayname>, <index>, <axis>)
print(newerArray)
delArray = numpy.delete(newerArray, 2)
print(delArray)

print(newer2DArray)
del2DArray = numpy.delete(newer2DArray, 1, axis = 1)   # try with axis = 0 and axis = 1
print(del2DArray)

### DELETE THE FIRST ROW OF YOUR 2D ARRAY
### DELETE THE LAST COLUMN OF YOUR 2D ARRAY

## generate an array of zeroes
# numpy.zeros(<size of dimension 0>)
print(numpy.zeros(10))
# numpy.zeros((<size of dimension 0>, <size of dimension 1>))
print(numpy.zeros((4, 4)))


## generate an array of ones
# numpy.ones(<size of dimension 0>)
print(numpy.ones(5))
# numpy.ones((<size of dimension 0>, <size of dimension 1>))
print(numpy.ones((3, 3)))


## generate an array of any value
# numpy.full(<size>, <value>)
print(numpy.full(20, 9))
print(numpy.full((3, 3), 2))

## generate an identity matrix  --- ones along the diagonal
print(numpy.eye(7))  ## a 7x7 identity matrix

## element-wise multiplication vs matrix multiplication
arr1 = numpy.array([[1, 2], [3, 4]])
arr2 = numpy.full((2, 2), 4)
print(arr1) 
print(arr2)

# what do these produce?
print(arr1 * arr2)
print(numpy.multiply(arr1, arr2))
print(numpy.matmul(arr1, arr2))

#print(numpy.dot(arr1, arr2))  ## note this is equivalent to matrix mult for 2D


arr3 = numpy.array([1, 2])
arr4 = numpy.array([3, 4])
print(numpy.dot(arr3, arr4))

### USE SOME COMBINATION OF THE ABOVE OPERATIONS TO GENERATE A 2D ARRAY WITH
##  5'S ON THE DIAGONAL AND ZEROS ELSEWHERE
