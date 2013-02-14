triangle puzzle, C++ edition
===============

This is an awful brute-force solution to the [triangle-puzzle](http://www.officeplayground.com/Assets/ProductPreview/pi3000-3199/3174_peggame_1.jpg) thing where
you have pegs that jump other pegs. 

It shouldn't be used by anyone for any reason.

This code shouldn't be looked at by anyone for any reason. 

If you must, though:

    g++ -Wall -I . main.cpp board.cpp node.cpp -o main

The board is set up with nodes like this:

            0
          1   2
        3   4   5
      6   7   8   9
    10  11  12  13  14  
    
    
solutions
=========

Generated solutions will look something like this: 

    ## begin solution ##
    from: 3, to: 0, over: 1
    from: 5, to: 3, over: 4
    from: 13, to: 4, over: 8
    from: 6, to: 1, over: 3
    from: 12, to: 3, over: 7
    from: 0, to: 5, over: 2
    from: 9, to: 2, over: 5
    from: 2, to: 7, over: 4
    from: 1, to: 6, over: 3
    from: 10, to: 3, over: 6
    from: 3, to: 12, over: 7
    from: 11, to: 13, over: 12
    from: 14, to: 12, over: 13
    ## end solution ##
    
Line 1 means "move peg 3 to peg 0 over peg 1"

curiosity satisfied
===================

    There are 29760 solutions when the 0 peg is open first (took 2.99158 seconds.)
    There are 29760 solutions when the 10 peg is open first (took 3.05413 seconds.)
    There are 29760 solutions when the 14 peg is open first (took 3.03566 seconds.)
    There are 14880 solutions when the 1 peg is open first (took 1.57392 seconds.)
    There are 14880 solutions when the 2 peg is open first (took 1.56325 seconds.)
    There are 14880 solutions when the 6 peg is open first (took 1.55677 seconds.)
    There are 14880 solutions when the 11 peg is open first (took 1.56967 seconds.)
    There are 14880 solutions when the 13 peg is open first (took 1.57275 seconds.)
    There are 14880 solutions when the 9 peg is open first (took 1.57545 seconds.)
    There are 1550 solutions when the 4 peg is open first (took 0.768335 seconds.)
    There are 1550 solutions when the 7 peg is open first (took 0.770984 seconds.)
    There are 1550 solutions when the 8 peg is open first (took 0.770542 seconds.)
    There are 85258 solutions when the 3 peg is open first (took 6.06795 seconds.)
    There are 85258 solutions when the 5 peg is open first (took 6.06844 seconds.)
    There are 85258 solutions when the 12 peg is open first (took 6.07781 seconds.)
