#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "Test: making a herd\n";
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

    std::cout << "\nTest: Create Animal\n";
    const Animal* meta = new Animal();
    std::cout << std::endl;

    std::cout << "Test: Create Dog\n";
    const Animal* j = new Dog();
    std::cout << std::endl;

    std::cout << "Test: Create Cat\n";
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << "Test: Dog type?\n";
    std::cout << j->getType() << " " << std::endl;

    std::cout << "Test: Cat type?\n";
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    std::cout << "Test: Cat sound\n";
    i->makeSound(); 

    std::cout << "Test: Dog sound\n";
    j->makeSound();

    std::cout << "Test: Animal sound\n";
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << "Test: Create wrong Animal & wrong cat together\n";
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " " << std::endl;
    std::cout << std::endl;
        
    std::cout << "Test: wrong cat sound\n";
    wrongCat->makeSound();
    std::cout << std::endl;

    delete wrongCat;
     
    std::cout << "\nTest: Dog Copy Constructor\n";
    Dog originalDog;
    originalDog.setType("Original Dog");
    Dog copiedDog(originalDog);
    std::cout << "Original Dog Type: " << originalDog.getType() << std::endl;
    std::cout << "Copied Dog Type: " << copiedDog.getType() << std::endl;
    copiedDog.makeSound();
    std::cout << std::endl;

    std::cout << "\nTest: Dog Copy Assignment Operator\n";
    Dog anotherDog;
    anotherDog.setType("another Dog");
    Dog reassignedDog;
    reassignedDog = anotherDog;
    std::cout << "another Dog Type: " << anotherDog.getType() << std::endl;
    std::cout << "reAssigned Dog Type: " << reassignedDog.getType() << std::endl;
    reassignedDog.makeSound();
    std::cout << std::endl;

	Cat cat1;
	cat1.setIdea("lessgoo", 0);
	Cat cat2(cat1);
	std::cout << cat2.getIdea(0) << std::endl;
	std::cout << "CAT 1 IDEA -------------\n";
	cat2.setIdea("BABOON", 1);
	std::cout << cat1.getIdea(1) << std::endl;
	std::cout << cat2.getIdea(1) << std::endl;
	
	std::cout << std::endl;

	Dog*	dog1 = new Dog();
	dog1->setIdea("dawg", 0);
	Dog*	dog2 = new Dog();
	*dog2 = *dog1;
	std::cout << dog2->getIdea(0) << std::endl;
	std::cout << "DOG 1 IDEA -------------\n";
	dog2->setIdea("NUNCHUCKK", 1);
	std::cout << dog1->getIdea(1) << std::endl;
	std::cout << dog2->getIdea(1) << std::endl;


    return 0;
}
 
