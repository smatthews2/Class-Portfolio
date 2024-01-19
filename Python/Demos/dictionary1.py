# Jo Crandall
# Feb 2022
# Intro to dictionaries in python

def main():
    ## a dictionary stores a series of key-value pairs
    ## format is    dictionary_name = {key:value, key:value, ....}
    ## here is a dictionary that uses student ID for the key and student name for the value
    students = {1234:'Jo Crandall', 5678:'Mary Smith', 2319:'Cool Guy'}
    print(students)

    ## empty dictionaries can be created in two ways
    # new_dictionary = {}
    # print(new_dictionary)
    # other_dictionary = dict()
    # print(other_dictionary)

    ## we can't access an element of the dictionary with a default numerical index like we do with lists and arrays:
    #print(students[0])    ## we get a KeyError
    ## instead we use the key to access the value
    # print(students[1234])
    ## trying to access with the value in this way will also fail
    #print(students['Jo Crandall'])   

    ## let's add another key-value pair to the dictionary
    # students[4407] = 'Caden Peters'
    # print(students)

    ## remove a key-value pair element
    # del students[5678]    # notice that we use the square brackets for keys just like indexes..
    # print(students)

    ## in, not in   operators  to search through dictionary
    # if 1234 in students:
    #    print('The student with ID#', 1234, ' is ', students[1234])

    # if 5678 not in students:
    #    print('ID#', 5678, ' not found')

    ## we can loop through an entire ditionary by walking through the keys
    #for key in students:
    #    print(students[key])

    ## we can use len() on the dictionary to get its length, this will be the number of key-val pairs
    #print(len(students))

    ## a very useful feature is for the key to correspond to a LIST of values
    student_scores = {1234:[54, 46, 47]}
    ## add more
    student_scores[5678] = [76, 45, 60]
    student_scores[2319] = [55, 80, 71]
    # print(student_scores)
    # print(student_scores[2319])
    ## can we access a single score from this student's list of scores?
    #print(student_scores[2319][0])

    ## let's put that together with a for loop
    print('Student\t\tScore1\tScore2\tScore3')
    for key in student_scores:
       print(students[key],'\t', student_scores[key][0],'\t', student_scores[key][1],'\t', student_scores[key][2] )

    
main()