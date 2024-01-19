//
#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream> // For reading, writing, and appending files.
#include <vector>
#include <cctype> // For isChar, isNum, etc.
using namespace std;

void encryptFile(vector<vector<char>>);
void encryptCaesarFile(vector<vector<char>>); // Encrypts a file using a Caesar shift of 1.
void decryptFile(vector<vector<char>>);
void decryptCaesarFile(vector<vector<char>>); // Decrypts Caesar-shifted file.

#endif