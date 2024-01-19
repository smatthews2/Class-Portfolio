/*  Author: Jo Crandall
    CPSC 121 File I/O (Example 13)
    Oct 4, 2021
    Gonzaga University
    This program demonstrates reading from and writing to a file.
*/

#include <iostream>
#include <fstream>    /// ifstream and ofstream
#include <string>
using namespace std;

int main(){

    /// Declare variables
    int numFromFile;
    char charFromFile;
    string stringFromFile;

    /// opening a file
    ifstream inFile;  /// I am choosing to call my input file stream object "inFile"

    inFile.open("nums1.txt");  /// we have opened the file nums1.txt for reading
    //inFile.open("nums2.txt");  /// we have opened the file nums2.txt for reading
    //inFile.open("nums3.txt");  /// we have opened the file nums3.txt for reading

    /// now we will read data from the open file
    /// since this first file contains a list of integers, we will create an int to store the data we read
    
    inFile >> numFromFile;  /// the ifstream object automatically reads up until the first whitespace it encounters, then puts that data into numFromFile
    /// let's see if it worked:
    cout << numFromFile << endl;

    /// What happens if we read from the file again?
    //inFile >> numFromFile;
    //cout << numFromFile << endl;

    /// IMPORTANT!!
    /// Always close a file as soon as you are done using it!
    inFile.close();

    /// If we try to operate on a closed file we won't succeed
    //inFile >> numFromFile;
    //cout << numFromFile;

    /// Let's try opening a different file
    inFile.open("alphabet.txt");
    /// this file contains letters, so we'll put the data into a char or string, depending on situation
    
    //inFile >> charFromFile;
    //cout << charFromFile << endl;

    //inFile >> stringFromFile;
    //cout << stringFromFile << endl;

    /// let's try to read another string
    //inFile >> stringFromFile;
    //cout << stringFromFile << endl;

    /// remember to close that file!
    inFile.close();

    /// NOW, how about WRITING to a file?
    /// We'll use an output file stream object to open a file for writing
    ofstream outFile;
    /*
    outFile.open("writingDemo.txt");   /// notice that the file stream object creates the file if it doesn't exist yet
    outFile << 42;


    /// let's write something else to the file
    outFile << 3.14;    /// did we get what we want? what should we change?   (endl above)
    
    outFile.close();
    */

    /// CAUTION!! if we open a file and start writing to it this way, any previous data will be wiped out!!
    //outFile.open("nums.txt");
    //outFile.close();

    return 0;
}