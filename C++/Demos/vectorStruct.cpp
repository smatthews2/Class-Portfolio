// Jo Crandall
// November 17, 2021
// Multidimensional vectors, structs, arrays and vectors of structs

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/// Struct declarations
struct Student{
    string name;
    int ID;
    double balance;  //meal balance
};

struct CompSciCourse{
    string courseName; //student name
    string instructor;  //instructor name
    vector<Student> students; //vector of Student structs
};

/// Function prototypes
void printStudents(vector<Student> invec);
void printClass(CompSciCourse inClass);

int main(){

    ///  we can have a vector of lots of data types and structures...including structs
    
    Student student1;  //declare a Student structure and name it student1
    student1.ID = 123;   //assign 123 to the ID member of student1
    student1.name = "Sam";  //assign Jo to the name member of student1
    student1.balance = 42.50;   //assign 42.50 to the balance member of student1

    /// Declare a different Student structure
    Student student2 = {"Bob", 456, 18.96};
    Student student3 = {"Joe", 789, 21.93};
    Student student4 = {"Dean", 101, 500.01};
    Student student5 = {"Spooley", 102, 500.02};
    Student student6 = {"Spiney", 103, 500.03};

    /// We can have a vector of structs. Format is still: vector<data_type>  vector_name ...
    /*vector<Student> studentVector;  //how can we get our Students into this vector?
    studentVector.push_back(student1);
    studentVector.push_back(student2);
    printStudents(studentVector);*/


    /// Now we'll declare a CompSciCourse struct 
    CompSciCourse python1;
    python1.courseName = "Python I";
    python1.instructor = "Jo Crandall";

    CompSciCourse python2 = {"Python II", "Cool Guy"};
    python2.students.push_back(student4);
    python2.students.push_back(student5);
    printStudents(python2.students);
    
    //the vector of Students inside the CompSciCourse takes a slightly different approach
    python1.students.push_back(student1);
    python1.students.push_back(student3);

    //print out all the students in python1
    printStudents(python1.students);

    /// ******declare more students and put them into the python1 CompSciCourse
    printClass(python2);

    return 0;
}

/*This function prints the contents of a vector of Students
* Argument- vector<Student>
* No return.*/
void printStudents(vector<Student> invec){
    
    for(Student stu : invec){
        cout << "Name: " << stu.name << " - ID: " << stu.ID << " - Balance: " << stu.balance << endl;
    }
}

/// **** Write a function to print out the details on a CompSciCourse, including its name, instructor and all students
/// hint, use the printStudents() function we already have...

void printClass(CompSciCourse inClass){
    cout << "Course Name: " << inClass.courseName << endl;
    cout << "Instructor Name: " << inClass.instructor << endl;
    printStudents(inClass.students);
}