/* Author: Sebastian Matthews
    CPSC PA4: The X Files
    October 11, 2021
    Gonzaga University
    This program reads a list of numbers from a file and then outputs data to two new files using loops(for, while).
    For each number read in from PA4nums.txt, the program will perform two mathematical tasks:
    1. Determine whether the number is prime. 
    2. Determine whether the number is even or odd.
*/

#include <iostream>
#include <fstream> // For reading, writing, and appending files.
using namespace std;

// Declare functions and global variables upfront.
int modFact(int, int);
bool isPrime(int);
bool evenOrOdd(int);
int i;

// These variables below allow the program to view and edit files.
ifstream inFile; // "inFile" is in read mode, meaning that the data is taken from the file it is told to open.
ofstream outFile;
ofstream outOtherFile;

int main(){
    
    // Declare variables in main upfront.
    int numFromFile;
    
    // Open the appropriate files in their respective modes stated earlier.
    inFile.open("PA4nums.txt");
    outFile.open("Matthews_Sebastian_odd_even.txt");
    outOtherFile.open("Matthews_Sebastian_prime.txt");

    // Figure out whether each number in PA4nums.txt is even/odd and prime/composite, writing the results in the previously mentioned files.
    while (inFile >> numFromFile){
        isPrime(numFromFile);
        evenOrOdd(numFromFile);
    }

    // Close the files when done.
    inFile.close();
    outFile.close();
    otherOutFile.close();
    
}

// This function determines whether a given number is even or odd, and then prints it out to the file.
bool evenOrOdd(int n){
    if (n % 2 == 0){
            outFile << n << " is even." << endl;
            return true;
        }
        else{
            outFile << n << " is odd." << endl; 
            return false;
        }
}

// This function determines whether or not a given number is prime or not, and then prints it out to the file.
bool isPrime(int n){
    if (n == 2 || n == 3){
        outOtherFile << n << " is prime." << endl;
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0){
        outOtherFile << n << " is composite." << endl;
        return false; 
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0){
            outOtherFile << n << " is composite." << endl;
            return false;
        }  
    }
    outOtherFile << n << " is prime." << endl;
    return true;
}