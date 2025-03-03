
 #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iomanip>

int main()
{
    {
        std::cout << std::setw(8) << "" << "\033[4mPhase 1\033[0m\n";
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
    
        delete meta;
        delete j;
		std::cout << "HERE\n";
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
		Animal* Mark = new Dog();
		Animal* Ed = new Dog();

		// Mark = Ed;

		delete Mark;
		delete Ed;

    }

        return 0;
}
