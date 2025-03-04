#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"

class WrongAnimal
{
	private:

	protected:
		 std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);

        std::string getType() const;
        void setType(std::string);

        virtual void makeSound();

};
