# Practice with modularization and importing.

import gradeconstants

def main():
    studentGrade = float(input('Enter grade.\n'))
    if(studentGrade >= gradeconstants.GRADE_A):
        print('Well done! Your grade is an A.')
    elif(studentGrade >= gradeconstants.GRADE_B and studentGrade < gradeconstants.GRADE_A):
        print('Nice! Your grade is a B.')
    elif(studentGrade >= gradeconstants.GRADE_C and studentGrade < gradeconstants.GRADE_B):
        print('Cool! Your grade is a C.')
    elif(studentGrade >= gradeconstants.GRADE_D and studentGrade < gradeconstants.GRADE_C):
        print('Not so cool! Your grade is a D.')
    elif(studentGrade <= gradeconstants.GRADE_F):
        print('Shucks! Your grade is an F.')

main()