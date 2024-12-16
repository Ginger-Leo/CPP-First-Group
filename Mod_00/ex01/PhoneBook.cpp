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
	}
		std::cout << "Contact has been added!\n" << std::endl;
		std::cout << "Contact Summary:" << std::endl;
		std::cout << "First Name     : " << this->_contacts[x].getFirstName() << std::endl;
		std::cout << "Last Name      : " << this->_contacts[x].getLastName() << std::endl;
		std::cout << "Nickname       : " << this->_contacts[x].getNickName() << std::endl;
		std::cout << "Phone Number   : " << this->_contacts[x].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << this->_contacts[x].getDarkestSecret() << std::endl;
	x++;
	}

void PhoneBook::searchPhoneBook(){
	int x = 0;
	std::string str;
	while (x < 8){	
    	if (this->_contacts[x].getIndex() != -1){
        	std::cout << std::left << std::setw(10) << PhoneBook::truncate(std::to_string(this->_contacts[x].getIndex()), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getFirstName(), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getLastName(), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getNickName(), 10) << std::endl;
    	}
    	x++;
	}
	std::cout << "select index number:" << std::endl;
	std::getline(std::cin, str);
	int n = 0;
	try{
		n = std::stoi(str);
	}
	catch (const::std:: out_of_range&){
		std::cout << "out of range." << std::endl;
	}
	catch (const::std:: invalid_argument&){
		std::cout << "invalid argument." << std::endl;
	}
	x = 0;
	while (x < 8){	
    	if (this->_contacts[x].getIndex() == n){
        	std::cout << std::left << std::setw(10) << PhoneBook::truncate(std::to_string(this->_contacts[x].getIndex()), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getFirstName(), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getLastName(), 10) << "|"
                  << std::left << std::setw(10) << PhoneBook::truncate(this->_contacts[x].getNickName(), 10) << std::endl;
				  return;
    	}
    	x++;
	}
	std::cout << "selection not found." << std::endl;
	return;

}

std::string PhoneBook::truncate(const std::string &str, size_t width)
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
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