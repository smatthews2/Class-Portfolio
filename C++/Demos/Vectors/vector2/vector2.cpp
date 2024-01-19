// Implementation file for vector 2

#include "vector2.h"

/* the printVec() function prints the contents of a vector<int>
* Argument: vector<int>
* No return*/
void printVec(const vector<int> inVec){
    for (int element: inVec){
        cout << element << ' ';
    }
    cout << endl;
}

/* the fillVector() function fills a vector<int> with numbers from the user
* Argument: vector<int>
* No return.
* Note: pass by reference is used so the changes to the vector are visible back in main.*/
void fillVector(vector<int> & inVec){
    char cont;
    bool flag = true;
    int num;
    while (flag){
        cout << "Would you like to enter a value? (y/n)" << endl;
        cin >> cont;
        if (cont == 'n'){
            flag = false;
            break;
        }
        cout << "Enter an integer:" << endl;
        cin >> num;
        inVec.push_back(num);
    }
}

/* the sumVector() function adds up all the elements in a vector<int>
* Argument: vector<int>
* Return: total as an integer.
* Note: because pass by value is used, the data is not deleted from the original vector in main()*/
int sumVector(vector<int> inVec){
    int total = 0;
    while(!inVec.empty()){
        total += inVec[inVec.size() - 1];
        inVec.pop_back();
    }
    /// You can see that the vector that exists inside this function is now erased.
    cout << "The vector here now contains: ";
    printVec(inVec);
    return total;
}

/* the destroyVec() function clears the contents of a vector
* Argument: vector<int>
* No return.
* Note: pass by reference is used to alter the vector back in main*/
void destroyVec(vector<int> & inVec){
    inVec.clear();
}