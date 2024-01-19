# Jo Crandall
# Mar 2022
# Dictionary methods

from random import randint
from os import system

def main():

    myDictionary = {1:'cat', 2:'llama', 3:'fish'}
    print(myDictionary)

    ## the clear() method will empty the dictionary
    myDictionary.clear()
    #print(myDictionary)

    myDictionary = {1:'cat', 2:'llama', 3:'fish'}
    ## recall that previously if we searched for a key that was not in the dictionary, our program crashed with a KeyError
    ## the get() method can keep the program from ending
    # keyVal = myDictionary.get(4)
    # print(keyVal)
    # print("The program is apparently still running")

    ## The value 'None' was returned when get() didn't find the key
    ## We can customize this value-message

    # keyVal = myDictionary.get(4, 'That key was not found')
    # print(keyVal)
    # print("The program is apparently still running")

    ###### Write a LOOP that will look for the keys 1-10 and print out the value if found, 
    ## but print out 'Value not found' for every missing key...
    
    # for key in range(1, 11):
    #     myKeyVal = myDictionary.get(key, 'Value not found.')
    #     print(myKeyVal)

    ## keys() will get me only the keys in the dictionary
    # print(myDictionary.keys())

    ## and values() will get me only the values
    # print(myDictionary.values())

    ## the items() method returns all key,value pairs as tuples 
    # print(myDictionary.items())
    ## let's see what type of thing this is
    # print(type(myDictionary.items()))

    ## I can use the tuples that are contained in it 
    # print("ID# \t Animal")
    # for key, val in myDictionary.items():
    #    print (key, '\t', val)
        


    ## pop() is similar to get(), except instead of just returning a value, it also removes it from the dictionary
    # print(myDictionary)
    # myDictionary.pop(1)
    # print(myDictionary)
   
    ## What if i use pop() for a key that isn't there?
    # myDictionary.pop(1, 'eh')    ### modify with default return value message 'Key not found'
    # print("If I get here, the program is still running...")

    ## The popped value can be stored in a variable
    # var = myDictionary.pop(2)
    # print (var)
    # print (myDictionary)

    ## How do I put a key-value pair back in the dictionary??
    # myDictionary[1] = 'cat'
    # print(myDictionary)

    ## popitem() pops a RANDOM key-value pair from the dictionary, returning them as a tuple
    
    # key, val = myDictionary.popitem()
    # print (key)
    # print (val) 
    # print(myDictionary)

    ###### Write a LOOP that will randomly pop items from a dictionary 
    ## until the dictionary is empty, printing out what is popped as it goes...
    while myDictionary:
        num = randint(1, 3)
        output = myDictionary.pop(num, '')
        print(output)

main()