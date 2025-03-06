#pragma once
#include <iostream>
#include <string.h>

class Brain
{
    protected:

    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);

       std::string getIdea(unsigned int);
       void setIdea(std::string, unsigned int);
};