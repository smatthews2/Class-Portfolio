// Jo Crandall
// November 19, 2021
// Pointers and memory

#include <iostream>
//#include <vector>
using namespace std;

void arrayFunc(int arr[]){
    cout << "What is this in arrayFunc()?\t" << arr << endl;
}

/// This function receives the address of an int variable and adds 1 to the variable
void addToInt(int* inInt){
    *inInt += 1;  // we dereferenced to pointer to add to the actual variable value
}

void addToDoub(double* inDoub){
    *inDoub += 1;  // we dereferenced to pointer to add to the actual variable value
}

int main(){

    /// declare an int array
    int myArray[] = {1,2,3};
    //cout << myArray << endl;
    /// The array's name holds a memory ADDRESS
    /// This can be broken down even further when we think about the fact that this array holds INTs
    /// It actually holds the address of the first BYTE allocated to the first element of the array
    /// and an INT takes 4 bytes

    /// Let's explore the other memory addresses of this array:
    //cout << &myArray[0] << endl;
    //cout << &myArray[1] << endl;
    //cout << &myArray[2] << endl;

    /// here's what we get when we print array name in main
    //cout << "What is this in main()?\t\t" << myArray << endl;
    /// here's what we get when we print array name in function
    //arrayFunc(myArray);
    /// what's important here is that if we know the memory address of a variable, we can access what's INSIDE the variable as well!

    
    int x = 5;
    /// Just like we used '&' to see the ADDRESS up above in the array, or like we used '&' to send a pass-by-reference function arg,
    ///   we can use '&' to see what memory address a variable is located at:
    //cout << "The variable x lives at address: " << &x << endl;

    /// where does it seem like x and the array are located in memory with respect to each other?

    /// In fact, we can INTENTIONALLY set up a variable to hold a memory address.
    /// This is called a POINTER   (it 'points' at the first byte of a variable's space in memory)
    /// Format is data_type* variable_name
    int* xptr;  /// so xp is a variable that 'points' at an int variable 
    /// int* is the data type int-pointer (or pointer-to-int)

    /// now lets assign the address of x to the pointer variable xp
    xptr = &x;
    /// what's inside xp?
    //cout << "here is the value of xptr: " << xptr << endl;
    /// but of course, since xp is a variable, it lives somewhere too
    //cout << "here is where xp lives in memory: " << &xptr << endl;

    
    /// a double variable
    double y = 10;
    /// let's try to make xp point at y instead of at x
    //xptr = &y;   /// the pointer type must match the variable type

    //double* yptr = &y;
    // cout << "Here is the value of y: " << y << endl;
    // cout << "Here is the address of y: " << &y << endl;
    // cout << "Here is the value of yptr:  " << yptr << endl;

    /// **** declare a char variable, then make a pointer to that variable & print out the value of the variable and its pointer
    /// *** do the same for a string, a float, and a bool variable
    /*char z = 'a';
    char* zptr = &z;
    cout << z << endl;
    cout << zptr << endl;
    cout << *zptr << endl;*/

    /// we can also see what DATA is contained in the variable whose address the pointer points at
    /// we do this by DEFERENCING the pointer (with an indirection operator):
    /// format is *pointer_name
    //cout << "yptr points to the address of y, and the variable y CONTAINS: " << *yptr << endl;

    /// ****** write similar code to DEREFERENCE one of your pointers

    /// a function can accept and return pointers as well:
    /// to call the addToInt() function, we need to send the ADDRESS of the variable we want to add to
    cout << "x before the func: " << x << endl;
    addToInt(&x);
    cout << "x after the func: " << x << endl;

    /// ***** write a similar function to change a different data type through a pointer parameter
    
    cout << "y before the func: " << y << endl;
    addToDoub(&y);
    cout << "y after the func: " << y << endl;


    return 0;
}