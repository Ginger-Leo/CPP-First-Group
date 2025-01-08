#include "Contact.hpp"

Contact::Contact()
{
	this->_index = -1;
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::~Contact()
{
}

void Contact::setIndex(int x)
{
	this->_index = x;
}
void Contact::setFirstName(std::string name)
{
	this->_first_name = name;
}

void Contact::setLastName(std::string name)
{
	this->_last_name = name;
}

void Contact::setNickName(std::string name)
{
	this->_nickname = name;
}

void Contact::setPhoneNumber(std::string number)
{
	this->_phone_number = number;
}

void Contact::setDarkestSecret(std::string secret)
{
	this->_darkest_secret = secret;
}

int Contact::getIndex()
{
	return this->_index;
}
std::string Contact::getFirstName()
{
	return this->_first_name;
}

std::string Contact::getLastName()
{
	return this->_last_name;
}

std::string Contact::getNickName()
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->_phone_number;
}
std::string Contact::getDarkestSecret()
{
	return this->_darkest_secret;
}
