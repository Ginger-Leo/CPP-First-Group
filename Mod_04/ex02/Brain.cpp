#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default Brain constructor called\n";
}
Brain::~Brain()
{
    std::cout << "default Brain destructor called\n";

}
Brain::Brain(const Brain &other)
{
    std::cout << "copy Brain constructor called\n";
    this->thing = other.thing;
}
Brain& Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
    {
        this->thing = rhs.thing;
    }
    std::cout << "Brain copy assignment operator called\n";

    return *this;
}
/*
std::string Brain::getIdeas()
{

}
void Brain::setIdeas()
{

}
*/