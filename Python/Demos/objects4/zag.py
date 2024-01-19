## Python classes and objects - inheritance

## Defining the Zag class, where a Zag is a member of the Zag community
class Zag:

    def __init__(self, fName, lName, inID):
        self.firstName = fName
        self.lastName = lName
        self.__GUID = inID
        print("A Zag has been constructed!")

    def get_GUID(self):
        return self.__GUID

    def __str__(self):
        return "Name: : " + self.firstName + self.lastName + "\nGUID: " + str(self.__GUID)


# the class Employee inherits from the class Zag
class Employee(Zag):

    # the constructor for the Employee class adds to the arguments for the constructor from the Zag class
    # notice the call to the __init__ method from the Zag class within this method
    def __init__(self, fName, lName, inID, inDept, inSalary):
        self.department = inDept
        self.__salary = inSalary
        # the arguments which are part of initializing a Zag (the parent class) go here:
        Zag.__init__(self, fName, lName, inID)
        print("An Employee has been constructed!")

    def set_salary(self, inSalary):
        self.__salary = inSalary

    def get_salary(self):
        return self.__salary

# write a class Student that inherits from Zag
#give the student class a constructor that takes in year (i.e. Sophomore) and major (i.e. Computer Science)
#also take in an argument to initialize a private data member GPA
#be sure to invoke an instance of the parent class
#since you have a private data member, you need a setter and getter

class Student(Zag):
    def __init__(self, fName, lName, inID,yearIn, majorIn):
        self.year = yearIn
        self.major = majorIn
        self.__GPA = 0
        Zag.__init__(self, fName, lName, inID)
        print('A Student has been constructed!')
    
    def get_GPA(self):
        return self.__GPA

    def set_GPA(self, inputGPA):
        self.__GPA = inputGPA

# an instructor is an Employee (which is a Zag)
# this employs hierarchical inheritance    child -> parent -> grandparent
class Instructor(Employee):

    def __init__(self, fName, lName, inID, inDept, inSalary, inTitle):
        self.title = inTitle

        Employee.__init__(self, fName, lName, inID, inDept, inSalary)
        print("An Instructor has been constructed!")

    #if we define a __str__ method in this child class, it will supercede the same method in the parent class
    def __str__(self):
        return "Name: " + self.firstName + self.lastName + \
                "\nGUID: " + str(self.get_GUID()) + \
                "\nDept: " + self.department               #notice that we had to use the getter on the private data member from the parent class

## write a class GradStudent which inherits from Student...
# you'll need a data attribute for degree type, such as Masters, PhD
# you'll also need a private data member for assistantship amount

class GradStudent(Student):
    def __init__(self, fName, lName, inID,yearIn, majorIn, degreeType, assistAmt):
        self.degree = degreeType
        self.__assistantshipAmount = assistAmt
        Student.__init__(self, fName, lName, inID,yearIn, majorIn)
        print('A Grad Student has been created!')

    def set_AssistAmount(self, amountIn):
        self.__assistantshipAmount = amountIn
    
    def get_AssistAmount(self):
        return self.__assistantshipAmount

