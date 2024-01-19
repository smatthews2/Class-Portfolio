#include "encryption.h"

ofstream outFile;
ifstream inFile;

// These vectors serve as the framework that the program will use for encryption and decryption.
vector<vector<char>> encryptVec {{'a', 'z'},
                                 {'b', 'y'},
                                 {'c', 'x'},
                                 {'d', 'w'},
                                 {'e', 'v'},
                                 {'f', 'u'},
                                 {'g', 't'},
                                 {'h', 's'},
                                 {'i', 'r'},
                                 {'j', 'q'},
                                 {'k', 'p'},
                                 {'l', 'o'},
                                 {'m', 'n'},
                                 {'n', 'm'},
                                 {'o', 'l'},
                                 {'p', 'k'},
                                 {'q', 'j'},
                                 {'r', 'i'},
                                 {'s', 'h'},
                                 {'t', 'g'},
                                 {'u', 'f'},
                                 {'v', 'e'},
                                 {'w', 'd'},
                                 {'x', 'c'},
                                 {'y', 'b'},
                                 {'z', 'a'},};

vector<vector<char>> encryptCaesarVec {{'a', 'b'},
                                 {'b', 'c'},
                                 {'c', 'd'},
                                 {'d', 'e'},
                                 {'e', 'f'},
                                 {'f', 'g'},
                                 {'g', 'h'},
                                 {'h', 'i'},
                                 {'i', 'j'},
                                 {'j', 'k'},
                                 {'k', 'l'},
                                 {'l', 'm'},
                                 {'m', 'n'},
                                 {'n', 'o'},
                                 {'o', 'p'},
                                 {'p', 'q'},
                                 {'q', 'r'},
                                 {'r', 's'},
                                 {'s', 't'},
                                 {'t', 'u'},
                                 {'u', 'v'},
                                 {'v', 'w'},
                                 {'w', 'x'},
                                 {'x', 'y'},
                                 {'y', 'z'},
                                 {'z', 'a'},};

vector<vector<char>> decryptVec {{'z', 'a'},
                                 {'y', 'b'},
                                 {'x', 'c'},
                                 {'w', 'd'},
                                 {'v', 'e'},
                                 {'u', 'f'},
                                 {'t', 'g'},
                                 {'s', 'h'},
                                 {'r', 'i'},
                                 {'q', 'j'},
                                 {'p', 'k'},
                                 {'o', 'l'},
                                 {'n', 'm'},
                                 {'m', 'n'},
                                 {'l', 'o'},
                                 {'k', 'p'},
                                 {'j', 'q'},
                                 {'i', 'r'},
                                 {'h', 's'},
                                 {'g', 't'},
                                 {'f', 'u'},
                                 {'e', 'v'},
                                 {'d', 'w'},
                                 {'c', 'x'},
                                 {'b', 'y'},
                                 {'a', 'z'},};

void encryptFile(vector<vector<char>> inVec){
    char charFromFile;
    int i;
    inFile.open("PA8text.txt");
    outFile.open("PA8encrypted1.txt");
    while(inFile.get(charFromFile)){ // While getting characters from the file...
        if(isupper(charFromFile)){
            charFromFile = (char)tolower(charFromFile);
            for(vector<char> inner: inVec){ // Run through the outer vec, then access elements of the inner vecs.
                if(charFromFile == inner[0]){
                    outFile << (char)toupper(inner[1]);
                }    
            }
        }
        else{
            for(vector<char> inner: inVec){
                if(charFromFile == inner[0]){
                    outFile << inner[1];
                }
            }
        }    
        if(isdigit(charFromFile) || ispunct(charFromFile) || isspace(charFromFile)){ // Leave it alone if it's a space, punctuation mark, or a digit.
            outFile << charFromFile;
        }     
    }
    inFile.close();
    outFile.close();
}

void encryptCaesarFile(vector<vector<char>> inVec){
    char charFromFile;
    int i;
    inFile.open("PA8text.txt");
    outFile.open("PA8encrypted2.txt");
    while(inFile.get(charFromFile)){
        if(isupper(charFromFile)){
            charFromFile = (char)tolower(charFromFile);
            for(vector<char> inner: inVec){
                if(charFromFile == inner[0]){
                    outFile << (char)toupper(inner[1]);
                }    
            }
        }
        else{
            for(vector<char> inner: inVec){
                if(charFromFile == inner[0]){
                    outFile << inner[1];
                }
            }
        }    
        if(isdigit(charFromFile) || ispunct(charFromFile) || isspace(charFromFile)){
            outFile << charFromFile;
        }     
    }
    inFile.close();
    outFile.close();
}

void decryptFile(vector<vector<char>> inVec){
    char charFromFile;
    int i;
    inFile.open("PA8encrypted1.txt");
    outFile.open("PA8decrypted1.txt");
    while(inFile.get(charFromFile)){
        if(isupper(charFromFile)){
            charFromFile = (char)tolower(charFromFile);
            for(vector<char> inner: inVec){
                if(charFromFile == inner[0]){
                    outFile << (char)toupper(inner[1]);
                }    
            }
        }
        else{
            for(vector<char> inner: inVec){
                if(charFromFile == inner[0]){
                    outFile << inner[1];
                }
            }
        }    
        if(isdigit(charFromFile) || ispunct(charFromFile) || isspace(charFromFile)){
            outFile << charFromFile;
        }     
    }
    inFile.close();
    outFile.close();
}

void decryptCaesarFile(vector<vector<char>> inVec){
    char charFromFile;
    int i;
    inFile.open("PA8encrypted2.txt");
    outFile.open("PA8decrypted2.txt");
    while(inFile.get(charFromFile)){
        if(isupper(charFromFile)){
            charFromFile = (char)tolower(charFromFile);
            for(vector<char> inner: inVec){
                if(charFromFile == inner[1]){
                    outFile << (char)toupper(inner[0]);
                }    
            }
        }
        else{
            for(vector<char> inner: inVec){
                if(charFromFile == inner[1]){
                    outFile << inner[0];
                }
            }
        }    
        if(isdigit(charFromFile) || ispunct(charFromFile) || isspace(charFromFile)){
            outFile << charFromFile;
        }     
    }
    inFile.close();
    outFile.close();
}