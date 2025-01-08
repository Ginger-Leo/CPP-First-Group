#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook pb;
	std::string str;

	while(42)
	{
		if (std::cin.eof())
		{
                std::cout << "Tim's exit occurred." << std::endl;
                break;
		}
		std::cout << "Select a selection: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD"){
			std::cout << "Selection selected.\nselection: ADD" << std::endl;
			pb.addPhoneBook();		// add method (function)
		}
		if (str == "SEARCH"){
			std::cout << "Selection selected.\nselection: SEARCH" << std::endl;
			pb.searchPhoneBook();	// search method (function)
		}
		if (str == "EXIT"){
			std::cout << "Selection selected.\nselection: EXIT" << std::endl;
			break ;
		}
		// if (str == "all"){
		// 	pb.printall();	// test feature
		// }
		else
			std::cout << "Incorrect input. try again.\nPlease try to re-select the selection." << std::endl;
		
	}
	std::cout << "Goodbye!" << std::endl;
}
