#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Harl bot created" <<std::endl;
}
Harl::~Harl()
{
    std::cout << "Harl bot destroyed" <<std::endl;
}

void Harl::complain( std::string level )
{
    if (level == "debug"){
        std::cout << level << ":\n";
        Harl::debug();
        return ;
    }
    if (level == "info"){
        std::cout << level << ":\n";
        Harl::info();
        return ;
    }    
    if (level == "warning"){
        std::cout << level << ":\n";
        Harl::warning();
        return ;
    }
    if (level == "error"){
        std::cout << level << ":\n";
        Harl::error();
        return ;
    }
    else{
        std::cout << "level not recognised\nfor help: https://www.youtube.com/watch?v=xvFZjo5PgG0" << std::endl;
        return ;
        }
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void)
{    
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}