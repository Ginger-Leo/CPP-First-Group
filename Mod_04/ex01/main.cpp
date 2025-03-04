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
		delete i;
    }
    {
        std:: cout << "\n\n",
        std::cout << std::setw(8) << "" << "\033[4mPhase 2\033[0m\n";
        // Animal* herd[10];
        // for (int i = 0; i < 10; ++i) 
        // {
        //     if (i % 2 == 0)
        //         herd[i] = new Dog();
        //     else
        //         herd[i] = new Cat();
        // }
        // for (int j = 0; j < 10; ++j)
        // {
        //     delete herd[j];
        // }


		Animal Mark = Dog();
		Animal Gary = Dog();
		Dog Bono;
		Dog Johno;
		// Animal Ed =  Dog(*dynamic_cast<Dog*>(Mark));
		Bono.setType("mouse");
		Johno.setType("moose");
		Johno = Bono;
		std::cout << Johno.getType() << std::endl;
		// Bono.makeSound();
		// Mark;
		// Mark.makeSound();
		// Ed(Mark)
		// Mark = Ed;

    
        // delete Ed;

    }

        return 0;
}
