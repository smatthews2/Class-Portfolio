myDict = {}

myDict[1234] = ['Sebastian']
myDict[5678] = ['Placeholder']
myDict[91011] = ['Cool Guy']

myDict[1234].append('Freshman')
myDict[5678].append('Junior')
myDict[91011].append('Senior')

for idx in myDict:
    myDict[idx].append(1000)

print('Student\t\tYear\t\tBalance')
for idx in myDict:
    print(myDict[idx][0], '\t', myDict[idx][1], '\t', myDict[idx][2])


