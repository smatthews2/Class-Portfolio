// Jo Crandall
// November 17, 2021
// recap for writing to a file based on logical decision    

#include <string>
#include <fstream>
using namespace std;

int main(){


    /// lets open files for reading and writing
    fstream infile;
    infile.open("text.txt", ios::in);
    fstream outfile;
    outfile.open("output.txt", ios::out);
    char inChar;
    
    infile.get(inChar);

    while (infile){ /// while last file read successful...
        if (inChar == 'a'){
            outfile.put('z');
        }
        else{
            outfile.put(inChar);
        }
        infile.get(inChar);
    }

    infile.close();
    outfile.close();



    return 0;
}