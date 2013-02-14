triangle puzzle, ruby edition
===============

This is an awful brute-force solution to the [triangle-puzzle](http://www.officeplayground.com/Assets/ProductPreview/pi3000-3199/3174_peggame_1.jpg) thing where
you have pegs that jump other pegs. 

It shouldn't be used by anyone for any reason.

This code shouldn't be looked at by anyone for any reason. 

If you must, though:

    ruby game.rb

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

    There are 29760 solutions when the 0 peg is open first (took 37.027021 seconds.)
    There are 29760 solutions when the 10 peg is open first (took 36.975919 seconds.)
    There are 29760 solutions when the 14 peg is open first (took 36.960428 seconds.)
    There are 14880 solutions when the 1 peg is open first (took 19.283374 seconds.)
    There are 14880 solutions when the 2 peg is open first (took 19.250117 seconds.)
    There are 14880 solutions when the 6 peg is open first (took 19.279082 seconds.)
    There are 14880 solutions when the 11 peg is open first (took 19.288291 seconds.)
    There are 14880 solutions when the 13 peg is open first (took 19.269429 seconds.)
    There are 14880 solutions when the 9 peg is open first (took 19.299044 seconds.)
    There are 1550 solutions when the 4 peg is open first (took 9.926522 seconds.)
    There are 1550 solutions when the 7 peg is open first (took 9.92916 seconds.)
    There are 1550 solutions when the 8 peg is open first (took 9.949704 seconds.)
    There are 85258 solutions when the 3 peg is open first (took 73.190748 seconds.)
    There are 85258 solutions when the 5 peg is open first (took 73.32515 seconds.)
    There are 85258 solutions when the 12 peg is open first (took 73.196951 seconds.)
