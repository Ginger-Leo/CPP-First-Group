
 #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iomanip>

int main()
{
    {
        std::cout << std::setw(8) << "" << "\033[4mPhase 1\033[0m\n";
       
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
     
    
   
        delete j;
        delete i;
    }
    {
        std:: cout << "\n\n",
        std::cout << std::setw(8) << "" << "\033[4mPhase 2\033[0m\n";
        Animal* herd[10];
        for (int i = 0; i < 10; ++i) 
        {
            if (i % 2 == 0)
                herd[i] = new Dog();
            else
                herd[i] = new Cat();
        }
        for (int j = 0; j < 10; ++j)
        {
            delete herd[j];
        }
    }
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
