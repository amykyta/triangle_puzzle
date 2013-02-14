/* node.cpp */

#include <node.h>

namespace WilliamGMyers
{
    // Constructors
    Node::Node(unsigned int number, bool isOccupied)
    : d_number(number)
    , d_isOccupied(isOccupied)
    {}

    // getters + setters
    void Node::setNumber(unsigned int number) { d_number = number; }
    void Node::setIsOccupied(unsigned int isOccupied) { d_isOccupied = isOccupied; }

    unsigned int Node::number() const { return  d_number; }
    bool Node::isOccupied() const { return  d_isOccupied; }
}
