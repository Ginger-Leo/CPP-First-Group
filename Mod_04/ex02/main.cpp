
 #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main()
{
    
	{
		std:: cout << "\n\n",
        std::cout << std::setw(8) << "" << "\033[4mPhase 3\033[0m\n";

		std::cout << "I cant show a pure virtual function working (abstract class) as it wont compile\n";
		// Animal* D0G = new Dog;
		// Animal* C4T = new Cat;
		// Animal* M4N;
	
		// D0G->makeSound();
		// C4T->makeSound();
		// M4N-> makeSound();
	
	}
        return 0;
}
