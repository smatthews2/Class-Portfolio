/*  Author: Sebastian Matthews
    CPSC 122 01 Project 7: Writing a String Class
    Mar 4, 2022
    Gonzaga University
    This program demonstrates the use of a class, MyString, and its various functions.
    I SPENT MORE TIME REWORKING PROJECT 6 THAN THIS, SO IT MIGHT NOT BE DONE BY THE TIME I TURN IT IN.
*/

#include "8-MyStr.h"
#include <iostream> 
using namespace std;


int main(int argc, char* argv[])
{
 MyString str1(argv[1]);
 MyString* str2 = new MyString(argv[1]);

 //Test of myDisplay
 cout << "***************************************" << endl;
 cout << "*****Test 1 myDisplay*****" << endl;
 cout << "static test" << endl;
 cout << "output should be the command line input" << endl;
 str1.myDisplay();
 //Test of myStrlen
 cout << "String 1's length: " << str1.myStrlen() << endl;
 //Test of isEqual
 if(str1.isEqual("test")){
     cout << "isEqual works!" << endl;
 }
 //Test of find
 cout << "Substring begins at: " << str1.find("zag") << endl;
 cout << endl;
 cout << "*****Test 2  myDisplay*****" << endl;
 cout << "dynamic test" << endl;
 cout << "output should be the command line input" << endl;
 str2->myDisplay();
 //Test of myStrlen
 cout << "String 2's length: " << str2->myStrlen() << endl;
 //Test of isEqual
 if(str2->isEqual("test")){
     cout << "isEqual works!" << endl;
 }
 //Test of find
 cout << "Substring begins at: " << str2->find("zag") << endl;
 cout << endl;
 cout << "***************************************" << endl;
 //End Test of myDisplay

 

 delete str2;
 return 0;  
}
   
  
