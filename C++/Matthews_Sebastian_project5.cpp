/* Author: Sebastian Matthews
    CPSC 122 01 Project 5: The Affine Cipher
    Feb 9, 2022
    Gonzaga University
    This program encrypts and decrypts files using an Affine cipher method.
    This file has three operating modes:
        To generate a key, write: "./a.out 0 [file name]".
        To encrypt a plaintext, write: "./a.out 1 [key] [plaintext] [ciphertext]"
        To decrypt a ciphertext, write: "./a.out 2 [key] [ciphertext] [decipheredtext]"
*/
#include <fstream> // For reading, writing, and appending files.
#include <cctype> // For isChar, isNum, etc.
#include <iostream>
using namespace std;

void keyGen(string);
void userInput(int), error(int), fileOpen(fstream&, string, char), fileControl(string, string, string, int);
char encrypt(char, int, int), decrypt (char, int, int); // I didn't put the array in the decrypt prototype since the program already has access to it IF I WAS TOLD TO PUT IT AS A GLOBAL ARRAY. 

// The multiplicative inverses, all in a global constant array.
const int MI[26] = {0,1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25}; 

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
        keyGen(arrayArgs[2]);
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

/*  Description: Randomly generates and stores alpha and beta values.
    The alpha value is randomly drawn from the the set: 
    {1,3,5,7,9,11,15,17,19,21,23,25}
    The beta value is randomly drawn from the range: [1..25]  
    Input: name of file that stores the keys
    Output: alpha and beta values on subsequent lines of keyFile
*/
void keyGen(string keyFile){
    fstream manipFile;
    unsigned seed = time(0); // Give random() a new seed depending on the clock's time.
    srand(seed);
    int key = (rand() % 25) + 1, alphaArr[] = {1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25}, alpha = alphaArr[(rand() % 12)];
    fileOpen(manipFile, keyFile, 'w');
    manipFile << key << endl;
    manipFile << alpha << endl;
    manipFile.close();
}

/*  Description: invokes fileOpen (../B-Files/7-openFileError.cpp in my GitHub repo) on all files.  Closes all files.  Reads key file. Reads the input file and either invokes encrypt or decrypt. If the action is encrypt, alphabetic characters are transformed to upper case.   Writes the result of encrypt or decrypt to the output file. 
    Input: names of key file, input file and output file. mode value of 1 or 2
    Output: writes to the output file
*/
void fileControl(string keyFile, string inputFile, string outputFile, int mode){
    fstream manipFile, manipOtherFile;
    char charFromFile;
    string keyFromFile, alphafromFile;
    int key, alpha;
    
    // First, we retrieve the key from the key file.
    fileOpen(manipFile, keyFile, 'r');
    manipFile >> keyFromFile;
    key = stoi(keyFromFile); 
    manipFile >> alphafromFile;
    alpha = stoi(alphafromFile);
    manipFile.close();

    // We check to see whether we're decrypting or encrypting.
    if(mode == 1){ // If we're encrypting, open the input and output files...
        fileOpen(manipFile, inputFile, 'r');
        fileOpen(manipOtherFile, outputFile, 'w');
        while(manipFile.get(charFromFile)){ // and while we're reading it...
            if(isalpha(charFromFile)){
                manipOtherFile.put(encrypt(charFromFile, alpha, key)); // Encrypt.
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
                manipOtherFile.put(decrypt(charFromFile, alpha, key)); // Decrypt.
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
    Input: upper case alphabetic character, valid alpha, valid key
    Returns: encrypted version of ch
*/
char encrypt(char ch, int alpha, int beta){
    if(islower(ch)){
        ch = toupper(ch); // Turn any lowercase character into an uppercase character.
    }
    int pos = ch + 'A'; // Gauge the position of a character in the ASCII table.
    pos = ((alpha * pos) + beta) % 26; // Shift.
    ch = pos + 'A'; // Turn it back into a character.
    return ch;
}

/*  Description: Decrypts an upper case alphabetic character using the Caesar cipher
    Input: upper case alphabetic character, valid key
    Returns: decrypted version of input
*/
char decrypt(char ch, int alpha, int beta){
    int alphaInv = MI[alpha];
    int pos = ch - 'A';
    pos = ((alphaInv * pos - alphaInv * beta) + 650) % 26;
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
