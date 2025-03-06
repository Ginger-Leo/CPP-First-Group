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
	for (int i = 0; i < 99; i++)
	{
		ideas[i] = other.ideas[i];
	}
}
Brain& Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
    {
      for (int i = 0; i < 99; i++)
	  {
			ideas[i] = rhs.ideas[i];
	  }
    }
    std::cout << "Brain copy assignment operator called\n";
    return *this;
}

std::string Brain::getIdea(unsigned int i)
{
	if (i > 99)
		return "your brain is too small for that ammount of ideas\n";
	return ideas[i];
}
void Brain::setIdea(std::string new_idea, unsigned int i)
{
	if (i > 99)
	{
		std::cerr << "ideas are too far out of the box (brain)\n";
		return ;
	}
	ideas[i] = new_idea;
}
