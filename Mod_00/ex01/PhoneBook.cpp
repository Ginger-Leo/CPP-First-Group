#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook has been created! yipiii" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook has been destroyed! long live the phonebook" << std::endl;
}
void PhoneBook::addPhoneBook(){
	std::string str = "";
	static int x = 0;
	if (x == 8)
		x = 0;
	this->_contacts[x].setIndex(x + 1);
	while  (!std::cin.eof() && str == "")
	{
		std::cout << "Input first name: ";
		std::getline(std::cin, str);
		this->_contacts[x].setFirstName(str);		
	}
	str = "";
	while  (!std::cin.eof() && str == "")
	{
		std::cout << "Input last name: "; 
		std::getline(std::cin, str);
		this->_contacts[x].setLastName(str);
	}
	str = "";
	while  (!std::cin.eof() && str == "")
	{
		std::cout << "Input nickname:"; 
		std::getline(std::cin, str);
		this->_contacts[x].setNickName(str);
	}
	str = "";
	while  (!std::cin.eof() && str == "")
	{
		std::cout << "Input phone number:"; 
		std::getline(std::cin, str);
		this->_contacts[x].setPhoneNumber(str);
	}
	str = "";
	while  (!std::cin.eof() && str == "")
	{
		std::cout << "Input darkest secret:"; 
		std::getline(std::cin, str);
		this->_contacts[x].setDarkestSecret(str);
		std::cout << "Contact has been added!\n" << std::endl;
	}
		std::cout << "Contact Summary:" << std::endl;
		std::cout << "First Name     : " << this->_contacts[x].getFirstName() << std::endl;
		std::cout << "Last Name      : " << this->_contacts[x].getLastName() << std::endl;
		std::cout << "Nickname       : " << this->_contacts[x].getNickName() << std::endl;
		std::cout << "Phone Number   : " << this->_contacts[x].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << this->_contacts[x].getDarkestSecret() << std::endl;
	x++;
	}

void PhoneBook::searchPhoneBook(){
	int x = 1;
	std::string str;
	std::cout << "Index position to be searched (select between 1-8):" << std::endl;
	std::getline(std::cin, str);
	int n = std::stoi(str);
	if (n == -1)
		return ;
	while (x < 9)
	{
		if (n == this->_contacts[x].getIndex()){
			std::cout << _contacts[x].getFirstName() << std::endl;
			std::cout << _contacts[x].getLastName() << std::endl;
			std::cout << _contacts[x].getNickName() << std::endl;
			std::cout << _contacts[x].getPhoneNumber() << std::endl;
			std::cout << _contacts[x].getDarkestSecret() << std::endl;
			return ;
		}
		x++;
	}
	std::cout << "Selection does not exist, Merry Christmas!" << std::endl;

}

void PhoneBook::printall(){
	int x = 0;

	while (x < 9){
	std::cout << this->_contacts[x].getIndex() << std::endl;
	std::cout << this->_contacts[x].getFirstName() << std::endl;
	std::cout << this->_contacts[x].getLastName() << std::endl;
	std::cout << this->_contacts[x].getNickName() << std::endl;
	std::cout << this->_contacts[x].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[x].getDarkestSecret() << std::endl;
	x++;
	}
}