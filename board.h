#ifndef INCLUDED_BOARD
#define INCLUDED_BOARD

#include <node.h>
#include <vector>
#include <string>

namespace WilliamGMyers
{
    extern const int moveArray[][3];

    class Board
    {
    public:
        // Constructors
        Board(unsigned int openPos);
        ~Board();

        // getters + setters
        unsigned int remaining();

        void findMoves(std::vector<int>& moves);

        void move(unsigned int from, unsigned int to, unsigned int over);
        void rewind(unsigned int from, unsigned int to, unsigned int over);

        void printHistory();

    private:
        static const unsigned int NODE_COUNT = 15;
        static const unsigned int MOVE_LENGTH = 3;
        static const unsigned int MOVE_COUNT = 36;
        Node* d_nodes[NODE_COUNT];
        std::vector<std::string> d_history;
        unsigned int d_remaining;
    };
}


#endif
