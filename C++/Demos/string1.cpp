// Jo Crandall
// November 12, 2021
// Working with characters and strings, getline(), get()    See textbook sections 3.8, 10.1, 10.2, 12.5

#include <string>
#include <cctype>   //character testing methods such as isupper(), and case conversion functions such as toupper()
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    char myChar = 'a';
    /// we can use several character TESTING methods 
    if(isupper(myChar)){
        cout << "It's upper case" << endl;
    }

    if(islower(myChar)){
        cout << "It's lower case" << endl;
    }

    if(isdigit(myChar)){
        cout << "It's a numerical digit" << endl;
    }

    if(isalnum(myChar)){
        cout << "It's a letter or a number" << endl;
    }

    /// Try isspace() and ispunct() as well...

    /// We can also use character CONVERSION methods
    // cout << (char) toupper('a') << endl;    // we are casting the output of the toupper() function as a char because with some compilers we get the numerical ascii value back

    /// if the character is stored in a variable...
    char newChar = 'b';
    //cout << (char)toupper(newChar) << endl;
    /// Notice that the original variable is unchanged, however
    // cout << newChar << endl;

    /// Try to tolower() as well...

    /// Take a closer look at cin:
    string userName;
    // cout << "Enter your first and last name: " << endl;
    // cin >> userName;
    // cout << "Your first and last name are: " << userName << endl;
    /// what happened?

    /// To gather user input that includes whitespace, we can use getline(cin, variable_name)
    // cout << "Enter your first and last name: " << endl;
    // getline(cin, userName);
    // cout << "Your first and last name are: " << userName << endl;

    /// lets open a file for reading
    fstream infile;
    infile.open("text.txt", ios::in);
    char inChar;
    
    /// Similarly to above, when we use the filestream operator >> to read from a file, it doesn't treat whitespace the same as chars, strings, or numbers
    // while (infile >> inChar){
    // cout << inChar;
    // cout << endl;
    /// the getline method can also be used with filestreams to preserve whitespace
    // string lineIn;
    // getline(infile, lineIn);
    // cout << lineIn << endl;

    /// alternatively, we can access each character in the line we read:
    // for(char character : lineIn){
    //     cout << character;
    // }
    // cout << endl;

    /// Character conversion methods can be used on these individual characters:
    // for(char character : lineIn){
    //     cout << (char) toupper(character);
    // }
    // cout << endl; 

    /// We can also extract a single character from the file INCLUDING whitespace, with get()
    // infile.get(inChar);
    // cout << inChar;
    // infile.get(inChar);
    // cout << inChar;
    // infile.get(inChar);
    // cout << inChar;


    /// let's open a file for writing out
    fstream outfile;
    //outfile.open("testout.txt", ios::out);

    /// we previously wrote to a file with the filestream operator <<
    //outfile << inChar;
    /// We can use put() to write a single character to a file

    // infile.get(inChar);
    // outfile.put(inChar);
    // infile.get(inChar);
    // outfile.put(inChar);
    // infile.get(inChar);
    // outfile.put(inChar);
   

    /// or using a loop
    // while (infile){ /// while last file read successful...
    //     infile.get(inChar);
    //     outfile.put(inChar);
    // }

    



    return 0;
}