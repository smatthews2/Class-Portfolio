## We will create a Student class as follows:

class Student:  

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
        return "Name: " + self.name +'\nID: ' + str(self.__ID)


## we create an Instructor class as follows:

class Instructor:

    # initialization
    def __init__(self, inName, inID):
        self.name = inName
        self.classes = []
        self.__employeeID = inID    ## a private data member employeeID
        self.__maxHours = 12  ## a private data member maxHours
    
    ## mutator method to change the value of the instructor's maxHours to hours
    def set_Hours(self, hours):
        self.__maxHours = hours

    ## accessor method to retrieve employeeID
    def get_empID(self):
        return self.__employeeID
 
    ## accessor method to retrieve maxHours
    def get_hours(self):
        return self.__maxHours

    ## __str__ method to "print" the Student object
    def __str__(self):
        return "Name: " + self.name +'\nInstructor ID: ' + str(self.__employeeID)

## Now we'll create a class called Roster that holds all students and instructor for a course

class Roster:

    def __init__(self, courseName, teacher: Instructor):
        self.name = courseName
        self.numStudents = 0
        self.students = []
        self.instructor = teacher
        self.limit = 2

    #method to add a Student to the class
    def addStudent(self, inStudent: Student):
        if (self.numStudents < self.limit) and (self.name in inStudent.classes):
            self.students.append(inStudent)
            self.numStudents += 1
            print(inStudent.name + " has been added. " + str(self.numStudents) + " now in course.")
        elif(self.name not in inStudent.classes) and (self.numStudents < self.limit):
            inStudent.enroll(self.name)
            self.students.append(inStudent)
            self.numStudents += 1
            print(inStudent.name + " has been added. " + str(self.numStudents) + " now in course.")
        else:
            print('Course limit reached.')

    #method to print the current class information
    def printRoster(self):
        print('Roster for: ' + self.name)
        # print('Instructor: ', self.instructor)    ## what makes this work?
        #print('Instructor: ', self.instructor.name, self.instructor.employeeID)    ##  what went wrong?
        print('Instructor: ' + self.instructor.name, self.instructor.get_empID())
        for stu in self.students:
            print('Student: ' + stu.name, stu.get_ID())        #OR....??
    #
    def __str__ (self):
        return "Course name: " + self.name