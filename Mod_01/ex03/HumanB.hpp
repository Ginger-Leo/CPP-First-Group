#pragma once
#include <iostream>
#include <string>

class HumanB
{
private:
    std::string _name;
public:
    HumanB(std::string, Weapon);
    HumanB(std::string);
    ~HumanB();
    std::string getName();
};