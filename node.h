#ifndef INCLUDED_NODE
#define INCLUDED_NODE

#include <vector>

namespace WilliamGMyers
{
    class Node
    {
    public:
        // Constructors
        Node(unsigned int number, bool isOccupied);

        // getters + setters
        void setNumber(unsigned int number);
        void setIsOccupied(unsigned int isOccupied);

        unsigned int number() const;
        bool isOccupied() const;

        void findMoves(std::vector<int>& moves);

    private:
        unsigned int d_number;
        bool d_isOccupied;
    };
}

#endif
