/*  Author: Jo Crandall
    CPSC 121 File I/O with Loops (Example 14)
    Oct 4, 2021
    Gonzaga University
    This program demonstrates reading from and writing to a file using a loop structure.
*/

#include <iostream>
#include <fstream>    /// ifstream, ofstream AND fstream
#include <string>
using namespace std;

int main(){

    /// What if we want to append data to existing data in a file (not overwrite existing data)??
    fstream dataFile, inFile, outFile;
    char charFromFile;
    bool keepWriting;
    char userChoice;
    int userNum;

    /// ios::in

    /// ios::out  -- be careful!

    /// ios::app
    dataFile.open("nums.txt" , ios::app);  
    dataFile << 1000;
    //dataFile << 1000 << endl;
    //dataFile << endl;
    dataFile.close();

    /// Now let's do file I/O using loops and conditionals. Yay!

    /// loop for reading from file:
    /// fstream inFile declared above
    inFile.open("alphabet.txt", ios::in);  ///open the file for reading in data
    
    for (int i = 0; i < 10; i++){
        //should file.open() go here??????  TRY IT with open and close inside the loop
        //should char declaration go here????    ///(declaration above)
        inFile >> charFromFile;  //which operator? << or >>?
        cout << "We just read: " << charFromFile << endl;
        //should file.close() go here?????
    }
    inFile.close();

    //loop for writing to a file:
    /// fstream outFile declared above

    /*
    outFile.open("nums.txt", ios::app);   //what mode should we open in if we want to add to end of file? 
    
    keepWriting = true;
    while (keepWriting){
        
        cout << "What number would you like to append?   ";  /// ask user what number to add to file
        cin >> userNum;                                         /// get user's number
        outFile << userNum << endl;                         /// append user's number to file

        cout << "would you like to keep writing? (y/n)   ";
        cin >> userChoice;
        switch (userChoice){
            case 'y': keepWriting = true; break;    /// do we need this case?????   How would you write this with an if statement?
            case 'n': keepWriting = false; 
        }

    }

    outFile.close();
    */

    /// overwrite existing files here....NOOOOOO!!!
    outFile.open("nums.txt", ios::out);

    return 0;
}