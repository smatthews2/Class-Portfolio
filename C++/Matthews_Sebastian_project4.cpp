/* Author: Sebastian Matthews
    CPSC 122 01 Project 4: The Substitution Cipher
    Feb 9, 2022
    Gonzaga University
    This program encrypts and decrypts files using a Caesar shift method.
    This file has three operating modes:
        To generate a key, write: "./a.out 0 [file name]".
        To encrypt a plaintext, write: "./a.out 1 [key] [plaintext] [ciphertext]"
        To decrypt a ciphertext, write: "./a.out 2 [key] [ciphertext] [decipheredtext]"
*/
#include <fstream> // For reading, writing, and appending files.
#include <cctype> // For isChar, isNum, etc.
#include <iostream>
using namespace std;

int keyGen(void);
void userInput(int), error(int), fileOpen(fstream&, string name, char mode), fileControl(string, string, string, int);
char encrypt(char, int), decrypt(char, int);

int main(int numArgs, char* arrayArgs[]){
    fstream manipFile;

    // Below is a series of error conditions that may trigger before we 
    // call our functions with incorrect arguments.
    if(numArgs <= 2){
        error(1);
    }
    if(numArgs > 5){
        error(2);
    }

    // Now, we check the mode that the user inputted.
    if(atoi(arrayArgs[1]) == 0){
        fileOpen(manipFile, arrayArgs[2], 'w');
        manipFile << keyGen();
        manipFile.close();
    }
    else if(atoi(arrayArgs[1]) == 1 || atoi(arrayArgs[1]) == 2){
        if(numArgs < 5){
            error(1);
        }
        else if(numArgs > 5){
            error(2);
        }
        else{
            fileControl(arrayArgs[2], arrayArgs[3], arrayArgs[4], atoi(arrayArgs[1])); // Encrypt/decrypt a message.
        }
        return 0;    
    }
    else{
        error(3); // If the user inputs a mode that does not exist.
    }
}

/*  Description: Randomly generates an integer in the range: [1..25]
    Input: none
    Output: returns a randomly generated integer in the range [1..25]
*/
int keyGen(){
    unsigned seed = time(0); // Give random() a new seed depending on the clock's time.
    srand(seed);
    int key = (rand() % 25) + 1;
    return key;
}

void fileControl(string keyFile, string inputFile, string outputFile, int mode){
    fstream manipFile, manipOtherFile;
    char charFromFile;
    string keyFromFile;
    int key;
    
    // First, we retrieve the key from the key file.
    fileOpen(manipFile, keyFile, 'r');
    manipFile >> keyFromFile;
    key = stoi(keyFromFile);   
    manipFile.close();

    // We check to see whether we're decrypting or encrypting.
    if(mode == 1){ // If we're encrypting, open the input and output files...
        fileOpen(manipFile, inputFile, 'r');
        fileOpen(manipOtherFile, outputFile, 'w');
        while(manipFile.get(charFromFile)){ // and while we're reading it...
            if(isalpha(charFromFile)){
                manipOtherFile.put(encrypt(charFromFile, key)); // Encrypt.
            }
            else{
                manipOtherFile << charFromFile;
            }
        }
        manipFile.close();
        manipOtherFile.close();   
    }
    else{ // If we're decrypting, open the input and output files...
        fileOpen(manipFile, inputFile, 'r');
        fileOpen(manipOtherFile, outputFile, 'w');
        while(manipFile.get(charFromFile)){ // and while we're reading it...
            if(isalpha(charFromFile)){
                manipOtherFile.put(decrypt(charFromFile, key)); // Decrypt.
            }
            else{
                manipOtherFile << charFromFile;
            }
        }
        manipFile.close();
        manipOtherFile.close();      
    }  
    
}

/*  Description: Encrypts an upper case alphabetic character using the Caesar cipher
    Input: upper case alphabetic character, valid key
    Returns: encrypted version of ch
*/
char encrypt(char ch, int key){
    if(islower(ch)){
        ch = toupper(ch); // Turn any lowercase character into an uppercase character.
    }
    int pos = ch + 'A'; // Gauge the position of a character in the ASCII table.
    pos = (pos + key) % 26; // Shift.
    ch = pos + 'A'; // Turn it back into a character.
    return ch;
}

/*  Description: Decrypts an upper case alphabetic character using the Caesar cipher
    Input: upper case alphabetic character, valid key
    Returns: decrypted version of input
*/
char decrypt(char ch, int key){
    int pos = ch + 'A';
    pos = ((pos - key) + 26) % 26;
    ch = pos + 'A';
    return ch;
}


/*  Description: function opens a file
    Input: file stream object reference, name of the file, mode of open
    Output: input file name is opened. 
*/
void fileOpen(fstream& file, string name, char mode){
    string fileType;

    if (mode == 'r')
        fileType = "input";
    if (mode == 'w')
        fileType = "output";
    if(mode == 'r')
        file.open(name, ios::in);  //available through fstream
    if(mode == 'w')
        file.open(name, ios::out);  //available through fstream
    if(file.fail()){
        cout << "Error opening " << fileType << " file" << endl; 
        exit(EXIT_FAILURE);
    }
}

/*  Description: This function tells the user what they inputted
	incorrectly.
	Input: an integer that corresponds to a case in the switch 
	statement
	Returns: nothing; it exits the program
*/
void error(int x){
    switch(x){
        case 1:
            cout << "Too few arguments.\n";
            exit(EXIT_FAILURE);
        case 2:
            cout << "Too many arguments.\n";
            exit(EXIT_FAILURE);
        case 3:
            cout << "Invalid mode.\n";
            exit(EXIT_FAILURE);
    }
}
