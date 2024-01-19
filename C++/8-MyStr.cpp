#include <iostream>
using namespace std;

#include "8-MyStr.h"
#include <cstring>

//Constructor
MyString::MyString(char const* strIn)
{
 length = strlen(strIn);  //strlen function
 str = new char[length + 1];
 strcpy(str, strIn); //strlen function
}

//Destructor function
//once you get the constructor working, remove the comments.
MyString::~MyString()
{
 cout << "OMG, I'm about to be deleted" << endl;
 delete []str; 
}

void MyString::myDisplay()
{
 cout << str << endl;
}

int MyString::myStrlen(){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

bool MyString::isEqual(char const* strIn){
    for(int i = 0; i < myStrlen(); i++){
        if(str[i] != strIn[i]){
            return false;
        }
    }
    return true;
}

int MyString::find(char const* strIn){
    for(int i = 0; i < myStrlen(); i++){
        if(isSub(strIn, i)){
            return i;
        }
    }
    return -1;
}

bool MyString::isSub(char const* strIn, int idx){
    for(int i = 0; i < sizeof(strIn); i++){
        if((strIn[i] == str[idx])){
            return true;
        }     
    }
    return false;
}

void MyString::concat(char const* strIn){
    //Writing this over break!
}