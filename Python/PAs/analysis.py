#   Author: Sebastian Matthews
#   CPSC 215 PA8: Excerpt Analysis
#   Apr 6, 2022
#   Gonzaga University
#   This program compares two files and outputs the similarities/differences to the user.

class compareFiles: # I put everything into a class to hone my class-writing skills and have every method located in one spot on the file.

    def __init__(self, file1, file2):
        self.punct = '''!()-[]{};:'"\,<>./?@#$%^&*_~''' # Putting punctuations marks in a string lets us have easy access to said elements.
        self.fileName1 = file1
        self.fileName2 = file2
        self.wordSet1 = set([])
        self.wordSet2 = set([])

    # This function counts the amount of words present in a given file.
    def wordCount(self):
        count1 = count2 = 0 # Set both word counts to zero.
        
        inFile1 = open(self.fileName1,'r') # Open the files...
        inFile2 = open(self.fileName2,'r')

        for word in inFile1.read().split(): # Splitting the read output lets us get words to count individually.
            count1 += 1

        for word in inFile2.read().split():
            count2 += 1
        
        inFile1.close()
        inFile2.close() # ...and close them once we're done.

        return count1, count2 # Return the result of the for loops.
    
    # This functions takes the words for a given file and puts them into a set.
    def fileToSet(self, file, wordSet: set):
        inFile = open(file,'r')
        
        for word in inFile.read().split():
            for ch in word: # We check our word for any attached punctuation marks...
                if ch in self.punct:
                    word = word.replace(ch, '') # ...and subsequently replace them.
            
            wordSet.add(word) # Add a word to the set.
        
        inFile.close() 

    # This function returns a set of words only present in a given file.
    def uniqueWordSets(self):
        self.fileToSet(self.fileName1, self.wordSet1)
        self.fileToSet(self.fileName2, self.wordSet2)
        return self.wordSet1.difference(self.wordSet2), self.wordSet2.difference(self.wordSet1)

    # This function the length of a seet of words only present in a given file, giving us the unique word count.
    def uniqueWordCount(self):
        self.fileToSet(self.fileName1, self.wordSet1)
        self.fileToSet(self.fileName2, self.wordSet2)
        return len(self.wordSet1.difference(self.wordSet2)), len(self.wordSet2.difference(self.wordSet1))

    # This function takes the intersection of two sets and provides the intersection, which is the words shared between two files.
    def commonWordCount(self):
        self.fileToSet(self.fileName1, self.wordSet1)
        self.fileToSet(self.fileName2, self.wordSet2)
        commonWordSet = self.wordSet1.intersection(self.wordSet2)
        return len(commonWordSet)

    # This function provides the average word length in both of the files.
    def averageWordLength(self):
        totalLen1 = totalLen2 = 0
        totalWordCount1 = self.wordCount()[0]
        totalWordCount2 = self.wordCount()[1]

        inFile1 = open(self.fileName1,'r')
        inFile2 = open(self.fileName2,'r')
        
        for word in inFile1.read().split():
            totalLen1 += len(word)
        
        for word in inFile2.read().split():
            totalLen2 += len(word)
        
        avgLen1 = totalLen1 // totalWordCount1
        avgLen2 = totalLen2 // totalWordCount2
        
        inFile1.close()
        inFile2.close()
        
        return avgLen1, avgLen2

def main():
    files = compareFiles('grisham1.txt', 'grisham2.txt')

    print('File 1\'s Word Count: ' + str(files.wordCount()[0]) + '\nFile 2\'s Word Count: ' + str(files.wordCount()[1]))
    print('File 1\'s Unique Word Count: ' + str(files.uniqueWordCount()[0]) + '\nFile 2\'s Unique Word Count: ' + str(files.uniqueWordCount()[1]))
    print('Set of Words Unique to File 1: ' + str(files.uniqueWordSets()[0]) + '\nSet of Words Unique to File 2: ' + str(files.uniqueWordSets()[1]))
    print('Common Word Count: ' + str(files.commonWordCount()))
    print('Average Word Length for File 1: ' + str(files.averageWordLength()[0]) + '\nAverage Word Length for File 2: ' + str(files.averageWordLength()[1]))

main()