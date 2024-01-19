

## The Generic class to demonstrate accessors and mutators

class Generic:

    #initialization
    def __init__(self, value1, value2):
        self.publicDataAttribute = value1       #this data attribute can be seen outside of the class
        self.__privateDataAttribute = value2    #this data attribute can be seen only inside the class

    ## here is an accessor ("getter") method to retrieve the private data attribute
    def get_private_attribute(self):
        return self.__privateDataAttribute

    ## here is a mutator ("setter") methdo to modify the private data attribute
    def set_private_attribute(self, value):
        self.__privateDataAttribute = value


## We will create a Student class as follows:

class Student:    ## a class name starts with a capital letter by convention

    # initialization
    def __init__(self, inName, inID):
        self.name = inName
        self.classes = []
        self.__ID = inID     ## by placing the two underscores before a data attribute name, it is hidden/private from non-class methods
        self.__GPA = 0.0                ## try with and without the underscores and accessing the student's ID back in main()
    
    # method to add a course to the student's classes
    def enroll(self, course):
        self.classes.append(course)
        print(course + " has been added.")

    ## method to remove a course from the student's classes
    def drop(self, course):
        self.classes.remove(course)
        print(course + " has been dropped.")

    ## here is an accessor ("getter") method to to retrieve the private ID data
    def get_ID(self):
        return self.__ID

    ## accessor method to retrieve private GPA
    def get_GPA(self):
        return self.__GPA

    ## mutator ("setter") method to set private GPA
    def set_GPA(self, inGPA):
        self.__GPA = inGPA

    ## __str__ method to "print" the Student object
    def __str__(self):
        return "Name: " + self.name +'\nID: ' + str(self.__ID) + '\nClasses: ' + str(self.classes)

## we create an Instructor class as follows:

class Instructor:

    # initialization
    def __init__(self, inName, inID):
        self.name = inName
        self.classes = []
        ## write a private data member employeeID
        self.__ID = inID
        ## write a private data member maxHours
        self.__maxHours = 0

    def add(self, course):
        self.classes.append(course)
        print(course + " has been added.")
    
    ## write a mutator method to change the value of the instructor's maxHours to hours
    def set_Hours(self, hours):
        self.__maxHours = hours

    ## write an accessor method to retrieve employeeID
    def get_ID(self):
        return self.__ID
 
    ## write an accessor method to retrieve maxHours
    def get_maxHours(self):
        return self.__maxHours

    ## write a __str__ method to "print" the Instructor object
    def __str__(self):
        return 'Name: ' + self.name + '\nID: ' + str(self.__ID) + '\nClasses: ' + str(self.classes)




