#Jo Crandall
#November 12, 2021
#String splitting, repetition operator, reading and writing strings and characters with files

def main():

    ## Recall that the repetition operator was used to replicate and concatenate lists
    ## lets try it with strings
    # myString = 'The sky is blue '
    # print(myString * 3)

    #print('Go Zags! ' * 4)

    #lets open a file for reading
    # To read through all the LINES of the file
    infile = open("text.txt", 'r')
    fileLine = infile.readline()
    while(fileLine != ''):
        print(fileLine, end = '')  ## the end= argument overrides the default behavior to print a newline
        fileLine = infile.readline()
    print('\n')
    infile.close()

    ## or we can do the same thing using python's natural behavior with a file object
    # infile = open('text.txt', 'r')
    # for line in infile:
    #     print(line.replace('\n', ' '), end = '')  ## the end= argument overrides the default behavior to print a newline    
    # print('\n')
    # infile.close()

    ## OR to read through all the CHARACTERS of the file
    # infile = open("text.txt", 'r')
    # fileChar = infile.read(1)
    # while(fileChar != ''):
    #     print(fileChar, end = ' ')
    #     fileChar = infile.read(1).replace('\n', ' ')
    # print('\n')
    # infile.close()

    ## What type of data is the fileLine?
    # infile = open("text.txt", 'r')
    # fileLine = infile.readline()
    # print(type(fileLine))
    ## which means that we can look at the individual characters in the string (see string.py demo file)

    # infile = open("text.txt", 'r')
    # fileLine = infile.readline()
    # infile.close()
    # for ch in fileLine:
    #     print(ch)
    
    ## The split method separates a string into multiple strings
    # splitLine = fileLine.split()
    # print(type(splitLine))
    # print(splitLine)

    ## other arguments can be used to split by different characters (instead of whitespace)
    # newSplit = fileLine.split('e')
    # print(newSplit)

    ## for example, we could use the decimal as the delimiter to separate dollars and cents
    price = '42.50'
    splitPrice = price.split('.') # Data type HAS to be a string.
    print(splitPrice)

    print("The item costs " + splitPrice[0] + " dollars and " + splitPrice[1] + " cents.") 


main()