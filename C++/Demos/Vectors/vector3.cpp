// Jo Crandall
// November 10, 2021
// Multidimensional vectors, structs, arrays and vectors of structs

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/// Struct declaration
struct Student{
    int ID; //student id           **each of these internal data elements is called a MEMBER of the struct
    string name; //student name
    double balance; //meal plan balance
};

struct Classroom{
    int roomNum, roomCap;
    double length, width; // in feet. 
};

/// Function prototypes
void print2dvec(vector<vector<int>>);
void print2dvec(vector<vector<string>>);
void printStudent(Student);

int main(){

    ///  we can have a vector of lots of data types and structures...including other vectors
    vector<vector<int>> vec2dInt {{1,2},{3,4},{5,6}};
    //print2dvec(vec2dInt);
    
    /// *****Write an overloaded version of the print function to handle 2d vectors of strings
    vector<vector<string>> vec2dStr {{"cat","dog"},{"fish","llama","giraffe"},{"pterodactyl"}};
    print2dvec(vec2dStr);

    /// We can access the elements of certain 'row' of the vector
    /// Recognize that this row is itself a VECTOR
    // for (int i = 0; i < vec2dStr[0].size(); i++){
    //     cout << vec2dStr[0][i] << ' ';
    // }
    // cout << endl;

    /// How would we walk down a 'column' of the vector?
    // for (int i = 0; i < vec2dInt.size(); i++){
    //     cout << vec2dInt[i][1] << endl;
    // }

    /// The arrays and vectors we have used have been limited to a single data type.
    /// Structs allow us to combine multiple data types in a logically related structure
    Student student1;  //declare a Student structure and name it student1
    student1.ID = 123;   //assign 123 to the ID member of student1
    student1.name = "Jo";  //assign Jo to the name member of student1
    student1.balance = 42.50;   //assign 42.50 to the balance member of student1

    //cout << student1.name << endl;

    /// Declare a different Student structure
    /// This time we'll initialize all at once
    Student student2 = {456, "Bob", 18.96};
    
    //cout << student2.name << endl;
    //cout << student2.ID << endl;
    //cout << student2.balance << endl;
    Classroom lab1;
    lab1.roomCap = 32;
    lab1.roomNum = 225;
    lab1.length = 16.25;
    lab1.width = 32.87;

    ///  ******Write a function to print the data members of a Student struct
    /// call the function to print the contents of each Student struct
    printStudent(student1);
    printStudent(student2);

    /// We can have an array of structs. Format is still: data type  array_name[array_size]...
    Student studentArray[] = {student1, student2};
    //printStudent(studentArray[0]);

    /// We can have a vector of structs. Format is still: vector<data_type>  vector_name ...
    vector<Student> studentVector {student1, student2};
    //printStudent(studentVector[1]);


    return 0;
}

/*This function prints the contents of a 2-dimensional vector to the screen.
* Argument- vector<vector<int>>
* No return.*/
void print2dvec(vector<vector<int>> invec){
    // we first walk through the OUTER vector, then through each INNER vector
    for(vector<int> inner: invec){
        for(int i = 0; i < inner.size(); i++){
            cout << inner[i] << ' ';
        }
        cout << endl;
    }
}

/// This is my string version.
void print2dvec(vector<vector<string>> invec){
    // we first walk through the OUTER vector, then through each INNER vector
    for(vector<string> inner: invec){
        for(int i = 0; i < inner.size(); i++){
            cout << inner[i] << ' ';
        }
        cout << endl;
    }
}

// Function to print out data members of a student.
void printStudent(Student instu){
    cout << "The student's name is: " << instu.name << ".\n";
    cout << "The student's ID is: " << instu.ID << ".\n";
    cout << "The student's balance is: " << instu.balance << ".\n";
}