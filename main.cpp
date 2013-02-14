/* main.cpp */

#include <board.h>
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <time.h>

namespace {
    int play(WilliamGMyers::Board* theBoard);
}

int main(){

    using namespace WilliamGMyers;

    unsigned int open_peg[] = {0, 10, 14, 1, 2, 6, 11, 13, 9, 4, 7, 8, 3, 5, 12};

    clock_t t;

    for(int i = 0; i < 15; ++i)
    {
        t = clock();
        Board* theBoard = new Board(open_peg[i]);

        std::cout << "There are " << play(theBoard) << " solutions when the " << open_peg[i] << " peg is open first";

        t = clock() - t;

        std::cout << " (took " << (float)t / CLOCKS_PER_SEC << " seconds.)" << std::endl;

        delete theBoard;
        theBoard = NULL;
    }

    return EXIT_SUCCESS;
}

namespace {

    int play(WilliamGMyers::Board* theBoard)
    {
        std::vector<int> moves;
        theBoard -> findMoves(moves);

        unsigned int from = 0;
        unsigned int to = 0;
        unsigned int over = 0;


        if(moves.size() > 0)
        {

            unsigned int count = 0;

            for(std::vector<int>::iterator it = moves.begin(); it != moves.end(); )
            {
                // Moves are placed modulo 3 in this vector, format being from, to, over, from, to over, etc.
                from = *it;
                ++it;
                to = *it;
                ++it;
                over = *it;
                ++it;

                theBoard -> move(from, to, over);
                count += play(theBoard);
                theBoard -> rewind(from, to, over);
            }

            return count;
        }
        else
        {
            if(theBoard -> remaining() == 1)
            {
                // std::cout << "## begin solution ##" << std::endl;
                // theBoard -> printHistory();
                // std::cout << "## end solution ##" << std::endl;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }

}
