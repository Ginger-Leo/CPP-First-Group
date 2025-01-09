#pragma once
#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    weapon(std::string);
    ~Weapon();
    std::const& getType();
    void setType();
};
