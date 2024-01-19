#Jo Crandall
#April 2022
#Gonzaga University
#Python inheritance

import zag

def main():

    #Here we are declaring an instance of class Zag
    zag1 = zag.Zag("Jo", "Crandall", 1234)

    #we can use the __str__ method set up for the class
    print(zag1)

    #Here we are declaring an instance of the class Employee, which inherits from Zag
    #emp1 = zag.Employee("Jo", "Crandall", 1234, "Computer Science", 10000000)
    #print(emp1)  

    # Notice what happens if we try to refer to the salary attribute for a Zag
    #print(zag1.get_salary())

    # But if we refer to the salary attribute for an Employee(Zag)
    #print(emp1.get_salary())

    # after writing the Student class, declare a Student
    # print out the student's Major and GPA
    stu1 = zag.Student("Jo", "Crandall", 1234, 'Sophomore', 'Computer Science')
    print(stu1)
    print(stu1.major)
    stu1.set_GPA(4.0)
    print(stu1.get_GPA())

    # instr1 = zag.Instructor("Jo", "Crandall", 1234, "Computer Science", 10000000, "Professor")
    # print(instr1)
    
    #after writing the GradStudent classs, declare a GradStudent
    # print out the grad student's GUID and major
    stu2 = zag.GradStudent("Jo", "Crandall", 1234, 'Sophomore', 'Computer Science', 'PhD', 10000000)
    print(stu2)
    print(stu2.major)
    
main()
