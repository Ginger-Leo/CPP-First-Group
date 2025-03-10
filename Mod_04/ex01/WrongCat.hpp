#pragma once
#include <iostream>
#include <string.h>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	protected:

	public:
		WrongCat();
		~WrongCat() override;
		WrongCat(WrongCat&);
		WrongCat& operator=(const WrongCat&);

        std::string getType() const;
        void setType(std::string);

		void makeSound() const;
};
