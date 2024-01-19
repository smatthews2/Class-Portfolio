# Jo Crandall
# April 2022
# Classes and objects in Python

## Creating a generic class:
class Generic:
    # everything indented will now constitute the class definition

    # first we need an initialization method which will be called whenever we create an INSTANCE of the class, that is, an OBJECT
    def __init__(self):                 #self always refers to the object itSELF
        self.dataAttribute = 42

    # we usually need methods (functions) that our class can use, otherwise we wouldn't be writing classes!
    def method(self):
        print("Have a nice day!")



## Now we will create a Student class as follows:

class Student:    ## notice that a class name starts with a capital letter by convention

    # initialization
    def __init__(self, inName):    # this time, we will send in an argument as we initialize
        self.name = inName         
        self.classes = []           # this is Student's list of classes, which is initialized as empty
    

    # this is a METHOD of the class Student - a Student can enroll in a class -> studentObject.enroll(courseString)
    def enroll(self, course):
        self.classes.append(course)      # notice that in order to refer to data attributes of the class, we use self.attribute
        print(course + " has been added for " + self.name, end='.\n')

    ## write a method to drop a course

    def drop(self, course):
        self.classes.remove(course)
        print(course + ' has been dropped for ' + self.name, end='.\n')

    def viewCourses(self):
        print("Here are the classes for " + self.name + ':')
        print(self.classes)

## Write a class Instructor and initialize with a name, and empty list of classes taught

class Instructor:
    
    def __init__(self, inName):
        self.name = inName
        self.classes = []
    
    def assign(self, course):
        self.classes.append(course)
        print(course + " has been added for "  + self.name, end='.\n')

    def viewCourses(self):
        print("Here are the classes for " + self.name + ':')
        print(self.classes)

def main():

    ## To instantiate an object for our Generic class we write:
    genericObject = Generic()

    ## Now genericObject is a Generic object which has been initialized with a dataAttribute 42
    ## We can access that dataAttribute by writing:
    #print(genericObject.dataAttribute)
    
    ## To use a method within the class, we do so through the object itself
    #genericObject.method()

    student1 = Student("Angela Brewer")
    student1.enroll("History II")
    student1.viewCourses()
    ## write the code to add "French" for student1
    student1.enroll('French')
    ## write the code to drop "History II" for student1
    student1.drop('History II')
    student1.viewCourses()
    ## instantiate a new student (student2) named "Bob Smith", enroll him in "Calculus" and "Robotics"
    student2 = Student('Bob Smith')
    student2.enroll('Calculus')
    student2.enroll('Robotics')
    student2.viewCourses()
    ## drop Bob from Robotics
    student2.drop('Robotics')
    student2.viewCourses()

    ## write the code to instantiate the instructor Jo Crandall
    instructor1 = Instructor('Jo Crandall')
    ## add Python and C++ to Jo Crandall's classes
    instructor1.assign('Python')
    instructor1.assign('C++')
    instructor1.viewCourses()
    ## write the code to instantiate the instructor Smith Bob
    instructor2 = Instructor('Smith Bob')
    ## add Java and HTML to Smith's classes
    instructor2.assign('Java')
    instructor2.assign('HTML')
    instructor2.viewCourses()

main()