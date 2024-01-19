###import this module to use these winning configurations for testing your hasFour() function

import numpy
if __name__ == '__main__':
    import connect_four as c4

# empty board -> you can copy this to declare your board in your program if desired
boardE = numpy.array(   [['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-']])

# o has vertical win
board1 = numpy.array(   [['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','-','-'],
                         ['o','-','-','-','-','-','-'],
                         ['o','-','-','x','-','-','-'],
                         ['o','o','x','x','-','-','-'],
                         ['o','x','o','x','-','-','-']])

# x has horizontal win
board2 = numpy.array(   [['-','-','-','-','-','-','-'],
                         ['x','-','-','-','-','-','-'],
                         ['o','o','-','-','-','-','-'],
                         ['x','x','x','x','-','-','-'],
                         ['o','x','o','o','-','-','-'],
                         ['o','o','o','x','-','-','-']])

# o has diagonal right win
board3 = numpy.array(   [['-','-','-','-','-','-','-'],
                         ['-','-','-','-','-','o','-'],
                         ['-','-','-','o','o','o','-'],
                         ['-','-','x','o','x','x','-'],
                         ['-','-','o','x','o','x','-'],
                         ['-','x','o','x','x','o','-']])

# x has diagonal left win
board4 = numpy.array(   [['-','x','x','-','-','-','-'],
                         ['-','x','x','o','-','-','-'],
                         ['-','o','x','x','o','-','-'],
                         ['-','o','o','o','x','-','-'],
                         ['-','o','x','o','x','-','-'],
                         ['o','x','x','o','o','-','-']])

# no win yet
board5 = numpy.array(   [['-','-','-','-','-','-','-'],
                         ['x','-','-','-','-','-','-'],
                         ['o','o','-','-','-','-','-'],
                         ['x','o','x','x','-','-','-'],
                         ['o','x','o','o','-','-','-'],
                         ['o','o','o','x','x','x','-']])

# tie with no win - game over
board6 = numpy.array(   [['o','x','x','o','x','x','x'],
                         ['x','o','x','x','o','x','o'],
                         ['o','o','o','x','o','x','o'],
                         ['x','o','x','x','o','o','x'],
                         ['o','x','o','o','x','x','o'],
                         ['o','o','o','x','x','o','o']])

# My own test board, to be thorough.
board7 = numpy.array(  [['-','-','-','-','-','-','-'],
                        ['x','-','-','-','-','-','-'],
                        ['o','-','-','-','-','-','-'],
                        ['x','o','-','-','-','-','-'],
                        ['x','o','o','-','-','-','-'],
                        ['x','o','x','o','-','-','x']]
)

# See above.
board8 = numpy.array(  [['-','-','-','-','-','-','-'],
                        ['-','-','-','-','-','-','-'],
                        ['-','-','-','-','o','-','-'],
                        ['x','-','-','o','x','-','-'],
                        ['x','o','o','x','x','-','-'],
                        ['x','o','x','o','x','-','x']]
)


if __name__ == '__main__': # GUARD CODE FOR TESTING FUNCTIONS
    def main():
        c4.gameBoard = board1
        print(c4.gameBoard)
        if(c4.vertCheck('o', 0)):
            print('Winner!')
        elif(c4.horzCheck('x', 5)):
            print('Winner, also!')
        elif(c4.downDiagCheck('x', 0, 1)):
            print('Winner, SAME!')
        elif(c4.upDiagCheck('o', 5, 1)):
            print('WINWINWINWIN!')
        elif(c4.boardFull()):
            print('LOSERS!')

    main()
