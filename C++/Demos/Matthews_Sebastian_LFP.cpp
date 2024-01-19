#include <iostream>
using namespace std;

int main(){
    bool keepAsking = true;
    string mood;
    while(keepAsking){
        cout << "How are you feeling?\n";
        cin >> mood;
        if(mood == "end"){
            keepAsking = false;
        }
    }
    return 0;
}