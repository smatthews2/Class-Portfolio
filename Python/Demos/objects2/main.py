# Jo Crandall
# November 19, 2021
# Python classes and modules, accessors and mutators


import academic   ## importing the academic module to use the Generic, Student, Instructor classes

def main():

    #since our class definitions now live in a separate module, we need to import that module then adjust our syntax appropriately
    #genericObject = Generic()
    #genericObject = academic.Generic()
    genericObject = academic.Generic(42, 3.14)
    
    ## Now let's print out the data attributes of our object
    print(genericObject.publicDataAttribute)

    # print(genericObject.privateDataAttribute)
    # print(genericObject.__privateDataAttribute)
    ## for private attributes we get an error because non-class functions cannot see/access private data attributes
    ## instead we use an accessor method to retrieve the private data attribute:
    print(genericObject.get_private_attribute())

    ##similarly, we SET private data attribute values with mutator methods:
    # genericObject.set_private_attribute(3.15)
    # print(genericObject.get_private_attribute())


    ## declare a Student "Mary Poppins"
    #stu1 = Student("Mary Poppins", 1234)

    stu1 = academic.Student("Mary Poppins", 1234)

    stu1.enroll("Chimney Sweeping 101")
    print(stu1.classes)
    stu1.drop("Chimney Sweeping 101")
    print(stu1.classes)


    ## try to print Mary Poppins' ID
    # print(stu1.ID)

    ## we get an error because non-class functions cannot see/access private data attributes
    ## instead we use an accessor method to retrieve the private data attribute:
    # print(stu1.get_ID())

    ##similarly, we set private data attribute values with mutator methods:
    # stu1.set_GPA(3.5)
    #print(stu1.GPA) ##what went wrong?

    # print(stu1.get_GPA())


    ## *****go to academic.py and fill out the Instructor class data and methods.....

    ## now let's use the Instructor class
    ## declare an instructor "Bert Alfred" with employee ID 6789
    instr = academic.Instructor('Bert Alfred', 6789)
   
    ## Bert is going to teach "Chimney Sweeping 101"
    instr.add('Chimney Sweeping 101')
    ##   and Advanced Chimney Sweeping
    instr.add('Advanced Chimney Sweeping')
    print(instr.__str__())
    ## set Bert's max hours to 15
    instr.set_Hours(15)
    print(instr.get_maxHours())
    print(instr.get_ID())

    ## What happens if we just print the object?
    # print(stu1)

    ## we need to prepare a print solution that gives us useful information
    print(stu1.__str__())
   

main()