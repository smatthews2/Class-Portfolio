# Jo Crandall
# April 2022
# Python classes and modules, objects within objects


import academic   ## importing the academic module to use the Student, Instructor, and Roster classes

def main():

    ## using the academic module, DECLARE SEVERAL STUDENTS
    ## Here's the first one
    stu1 = academic.Student("Mary Poppins", 1234)
    stu2 = academic.Student('Sebastian Matthews', 2222)
    stu3 = academic.Student('Cool Guy', 2176)


    
    ## declare an instructor "Bert Alfred" with employee ID 6789
    instr = academic.Instructor("Bert Alfred", 6789)
   

    ## set Bert's max hours to 15
    instr.set_Hours(15)

    ## Bert is going to teach Chimney Sweeping 101
    ## declare a Roster for Chimney Sweeping 101 with Bert as the instructor
    #cSweep101 = ...
    cSweep101 = academic.Roster('Chimney Sweeping 101', instr)
    ## add Mary Poppins to the Chimney Sweeping 101 class
    cSweep101.addStudent(stu1)
    cSweep101.addStudent(stu2)
    cSweep101.addStudent(stu3)
    ## declare a Roster for Advanced Chimney Sweeping with Bert as the instructor
    advCSweep = academic.Roster('Advanced Chimney Sweeping', instr)

    ## enroll some students in Chimney Sweeping 101 and Advanced Chimney Sweeping
    advCSweep.addStudent(stu1)
    advCSweep.addStudent(stu2)
    advCSweep.addStudent(stu3)
    ## let's try to print out all the students in Chimney Sweeping 101:
    # print(cSweep101.students)

    ## we have designed our own print solution in addition to the __str__ method
    cSweep101.printRoster()
    print()
    advCSweep.printRoster()


    ## How would we connect the Students' enroll behavior to the Roster's students attribute?
    ## Write the code to add a student to a certain roster if they have enrolled in the course
    ##    as long as the course limit is not reached
    ## You'll need to add a data attribute to the roster class to keep track of this limit
    print(stu1.classes)




main()