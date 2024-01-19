
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    int i = 0;
    ifstream inFile;
    string word;
    string lyrics[18];

    inFile.open("bday.txt");
    while (inFile >> word){
        
        lyrics[i] = word; 
        cout << lyrics[i] << endl;
        i++;

    }
    inFile.close();

}