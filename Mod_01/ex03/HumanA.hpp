#pragma once
#include <iostream>
#include <string>

class HumanA
{
private:
    std::string _name;
public:
    HumanA(std::string, Weapon);
    ~HumanA();
    std::string getName();
};