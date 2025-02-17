#include "DiamondTrap.hpp"

Diamond(std::string name) : ClapTrap(_name)
{

}
~Diamond()
{
    std::cout << "diamond destroyed\n";
}