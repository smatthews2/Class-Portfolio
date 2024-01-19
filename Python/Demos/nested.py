#   Author: Jo Crandall
#   CPSC 215 Loops - nested loops
#   Feb 4, 2022
#   Gonzaga University
#   This program demonstrates nested for loops and differences in runtime

import time        ## import the time library


## nested for loop example:
    
# for i in range(5):
#     for j in [0, 1, 2]:
#         for k in range(5, 1, -1):
#             print( "i, j, k: ", i, ' ', j, ' ', k)

## what do you expect to print?
## how many lines will be printed out (exactly or roughly)?
## what can you infer about the runtime complexity of any nested for loop?

    

## another way to gain insight into time complexity is to do the same thing with and without printing every time...
## plus here is an example of how you can cite another coding source: 
## code resource used:  https://stackoverflow.com/questions/1557571/how-do-i-get-time-of-a-python-programs-execution



## time the for loop with printing each time
# begin = time.time()     ## record the time when we start

# for m in range(1000000):
#     print( "m : ", m )
       
# end = time.time()       ## record the time when we stop
# print( "time in seconds: ", end - begin )  ## compute and print difference between stop and start time
    
## time the for loop without printing each time
begin = time.time()     ## record the time when we start

for m in range(1000000):
    x = 1
print( "m : ", m )      
end = time.time()       ## record the time when we stop
print( "time in seconds: ", end - begin )  ## compute and print difference between stop and start time    
