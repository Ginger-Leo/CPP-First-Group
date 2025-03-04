#pragma once
#include <iostream>
#include <string.h>


class Animal 
{
    protected:
        std::string type;
    private:

    public:
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&); 
        virtual ~Animal();

        std::string getType() const;
        void setType(std::string);

        virtual void makeSound() const = 0;
};
