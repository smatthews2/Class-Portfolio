/*  Author: Jo Crandall
    Date: Oct 6, 2021
    Program to demonstrate file open errors, detecting end of file.
*/

#include <fstream>   /// ifstream, ofstream, fstream
#include <iostream>
#include <string>
using namespace std;

int main(){

    ifstream inFile;
    int numRead;
    string fileToOpen;

    /// the fstream read-in operator, >>, has a true/false flag that lets us know whether it successfully read in data as expected
    /// this means that we can use it to detect the end of the file


    /// lets use this on our old friend nums.txt
    inFile.open("nums.txt");
    while (inFile >> numRead){        /// this condition evaluates to True if number successfully read in
        cout << "Just read the number: " << numRead << endl;
    }
    inFile.close();

    /// we may also have the situation that we can't successfully even OPEN the FILE
    /// similar to the successful reading in above, we can detect successful open
    /// we can detect file open errors in this way:
    /*
    inFile.open("nonexistant_file.txt");
    if (inFile){
        cout << "File opened successfully!" << endl;
    }
    else{
        cout << "Failed to open file:(" << endl;
    }
    */

    /// We can even store the file name in a string variable so that we can refer to it specifically
    /*
    fileToOpen = "nonexistant_file.txt";
    //fileToOpen = "nums.txt";
    inFile.open(fileToOpen);
    if (inFile){
        cout << "File " << fileToOpen << " opened successfully!" << endl;
    }
    else{
        cout << "Failed to open file: " << fileToOpen << endl;
    }
    */

    return 0;
}

