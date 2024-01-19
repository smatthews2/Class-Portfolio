text = 'Today we saw Mary and Jen at the market buying apples and bananas'
confidential = ['Mary','Jen','apples','bananas']

def main():
    # newStr = text.replace('Mary', 'CONFIDENTIAL').replace('Jen', 'CONFIDENTIAL').replace('apples', 'CONFIDENTIAL').replace('bananas', 'CONFIDENTIAL')
    # print(newStr)
    
    newStr = text
    for i in confidential:
        newStr = newStr.replace(i, 'CONFIDENTIAL')
    print(newStr)

main()