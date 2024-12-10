#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook pb;
	std::string str;

	while(str != "EXIT")
	{
		std::cout << "Select a selection: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD"){
			std::cout << "Selection selected.\nselection: ADD" << std::endl;
			pb.addPhoneBook();		// add method
		}
		if (str == "SEARCH"){
			std::cout << "Selection selected.\nselection: SEARCH" << std::endl;
			pb.searchPhoneBook();	// search method 
		}
		if (str == "all"){
			pb.printall();	// test feature
		}
		else
			std::cout << "incorrect input. try again." << std::endl;
		
	}
	std::cout << "Goodbye!" << std::endl;
}
