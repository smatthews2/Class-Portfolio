/* Author: Sebastian Matthews
    CPSC 122 01 Project 6: The Transposition Cipher
    Feb 9, 2022
    Gonzaga University
    This program encrypts and decrypts files using a Transposition cipher method.
    This file has three operating modes:
        To generate a key, write: "./a.out 0 [file name]".
        To encrypt a plaintext, write: "./a.out 1 [key] [plaintext] [ciphertext]"
        To decrypt a ciphertext, write: "./a.out 2 [key] [ciphertext] [decipheredtext]"
*/
#include <fstream> // For reading, writing, and appending files.
#include <cctype> // For isChar, isNum, etc.
#include <iostream>
using namespace std;

const int alphSize = 24; // Global constant for alphabet size.

void keyGen(string), keyEncGen(int[]), keyDecGen(int[], int[]), userInput(int), mystSort(int[]);
void fileOpen(fstream&, string, char), fileControl(string, string, string, int), error(int), shift(int[][2], int);
bool sink(int[][2]); 
char transform(char, int[]); 

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

/*  Description: This function(along with "sink" and "shift") implements mystery sort, sorting a 2-D array along column 1. 
    Input: 2-D array with encryption key in column 1 
    Output: 2-D arry with decryption key in column 0 
*/
void mystSort(int arr[][2]){
    bool shift = true;
    
    while(shift){
        shift = sink(arr);
    } 
}

bool sink(int arr[][2]){
    int cur = 0;
    bool shifts = false;
    
    while(cur < alphSize - 1){
        if(arr[cur][1] >  arr[cur+1][1]){
            shift(arr,cur);
            shifts = true;
        }
        cur++;
    }
    
    return shifts;
}

void shift(int arr[][2], int cur){
    int temp[1][2];
    temp[0][0] = arr[cur][0];
    temp[0][1] = arr[cur][1];

    arr[cur][0] = arr[cur+1][0];
    arr[cur][1] = arr[cur+1][1];

    arr[cur+1][0] = temp[0][0];
    arr[cur+1][1] = temp[0][1];
}

/*  Description: Opens key file for writing.  
    Generates and stores encrypt and decrypt keys in the key file.   
    This can be stored any way that you like as long as two arrays 
    can be constructed from the file, one for encryption and one for decryption. 
    Input: name of the file in which to store generated keys
    Output: file holds generated encryption and decryption keys 
*/
void keyGen(string keyFile){
    fstream manipFile;
    int keyEnc[alphSize], keyDec[alphSize];

    // First, we generate the keys.
    keyEncGen(keyEnc);
    keyDecGen(keyEnc, keyDec);

    fileOpen(manipFile, keyFile, 'w');
    
    // Then, we write out the encryption key...
    for(int i = 0; i < alphSize; i++){
        manipFile << keyEnc[i] << endl;   
    }

    // ...and the decryption key.
    for(int i = 0; i < alphSize; i++){
        manipFile << keyDec[i] << endl;   
    }
    
    manipFile.close();
}

void keyEncGen(int keyEnc[]){
    unsigned seed = time(0); // Give random() a new seed depending on the clock's time.
    srand(seed);

    bool validate[alphSize];
    int pos = 0, k;

    while(pos < alphSize){
        while(true){
            k = rand() % alphSize; // Generate a value within our alphabet size...
            if(validate[k] != true){ // ...and if it's not already used...
                keyEnc[pos] = k; // ...write it.
                validate[k] = true;
                pos++;
                break;
            }      
        }             
    }

}

void keyDecGen(int keyEnc[], int keyDec[]){
    int arr[alphSize][2];

    for(int i = 0; i < alphSize; i++){
        arr[i][0] = i;
        arr[i][1] = keyEnc[i];
    }

    mystSort(arr);

    for(int i = 0; i < alphSize; i++){
        keyDec[i] = arr[i][0];   
    }
   
}

/*  Description: invokes fileOpen (../B-Files/7-openFileError.cpp in my GitHub repo) on all files.  
    Closes all files.  Reads key file. Reads the input file and either invokes encrypt or decrypt. 
    If the action is encrypt, alphabetic characters are transformed to upper case.   
    Writes the result of encrypt or decrypt to the output file. 
    Input: names of key file, input file and output file. mode value of 1 or 2
    Output: writes to the output file
*/
void fileControl(string keyFile, string inputFile, string outputFile, int mode){
    fstream manipFile, manipOtherFile;
    char charFromFile;
    int keyEnc[alphSize], keyDec[alphSize];
    
    // First, we retrieve the key from the key file.
    fileOpen(manipFile, keyFile, 'r');
    for(int i = 0; i < alphSize; i++){
        manipFile >> keyEnc[i];
    }
    
    for(int i = 0; i < alphSize; i++){
        manipFile >> keyDec[i];
    }

    manipFile.close();

    // We check to see whether we're decrypting or encrypting.
    if(mode == 1){ // If we're encrypting, open the input and output files...
        fileOpen(manipFile, inputFile, 'r');
        fileOpen(manipOtherFile, outputFile, 'w');
        while(manipFile.get(charFromFile)){ // and while we're reading it...
            if(isalpha(charFromFile)){
                manipOtherFile.put(transform(charFromFile, keyEnc)); // Encrypt.
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
                manipOtherFile.put(transform(charFromFile, keyDec)); // Decrypt.
            }
            else{
                manipOtherFile << charFromFile;
            }
        }
        manipFile.close();
        manipOtherFile.close();      
    }  
    
}


char transform(char ch, int encDec[]){
    if(islower(ch)){
        ch = toupper(ch); // Turn any lowercase character into an uppercase character.
    }
    int pos = ch - 'A'; // Gauge the position of a character in the ASCII table.
    pos = encDec[pos]; // Use the given array to encrypt or decrypt.
    ch = pos + 'A'; // Turn it back into a character.
    
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
