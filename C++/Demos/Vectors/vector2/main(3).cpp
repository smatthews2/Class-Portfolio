/*  Author: Jo Crandall
    CPSC 121 Vector Basics 2 (Example 28)
    Nov 1, 2021
    Gonzaga University
    This program demonstrates STL vector methods.
*/

#include "vector2.h"


int main(){

    vector<int> myIntVec {3, 6, 2};

    /// We'll use a printVector function to print out elements
    printVec(myIntVec);
    cout << "size is: " << myIntVec.size() << endl;

    //push_back places a data item at the end of the vector.
    //if the vector is out of room, an element is created (or if size 0, an element is created)
    // notice also what happens to the size
    myIntVec.push_back(5);
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    myIntVec.push_back(9);
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    //pop_back removes the last element of the vector, so no argument is needed
    myIntVec.pop_back();
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    //clear removes all elements from the vector
    myIntVec.clear();
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    /// the empty() method returns true if the vector is empty
    if (myIntVec.empty()){
        //cout << "the vector is empty" << endl;
    }

    /// Let's use the push_back() and pop_back() methods in a loop with user input
    //fillVector(myIntVec);
    //cout << "The vector now holds: ";
    //printVec(myIntVec);

    int sum = sumVector(myIntVec);
    //cout << "The sum of the vector elements is: " << sum << endl;

    /// We can check that the original vector was not erased here in main()
    //cout << "The vector in main() contains: ";
    //printVec(myIntVec);

    /// As one final illustration of pass by reference with vectors, let's use the clear() function
    destroyVec(myIntVec);
    //cout << "The vector in main() contains: ";
    //printVec(myIntVec);


    //resize a vector with number of elements
    myIntVec.resize(5);   /// this way will resize the vector as size 5 with 0's where new elements are
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    myIntVec.resize(7, 2);   /// this way will resize the vector as size 7 with 2's where new elements are
    //printVec(myIntVec);
    //cout << "size is: " << myIntVec.size() << endl;

    return 0;
}
