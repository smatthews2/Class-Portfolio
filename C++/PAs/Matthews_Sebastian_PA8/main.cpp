/* Author: Sebastian Matthews
    CPSC PA8: Decoder
    November 20, 2021
    Gonzaga University
    This program reads a file and encrypts it utilizing two methods:
    1. Reversed Alphabet.
    2. Caesar Shift of 1.
*/

#include "encryption.h"

int main(){
    extern vector<vector<char>> encryptVec;
    extern vector<vector<char>> decryptVec;
    extern vector<vector<char>> encryptCaesarVec;
    encryptFile(encryptVec);
    decryptFile(decryptVec);
    encryptCaesarFile(encryptCaesarVec);
    decryptCaesarFile(encryptCaesarVec);
    return 0;
}