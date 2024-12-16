#pragma once

#include <iostream>
# include <iomanip>
#include <string>
#include <stdexcept>
#include "Contact.hpp"

class Contact;

class PhoneBook
{
	private: //class information
		Contact _contacts[8];
		std::string _name;
	public: //class function (methods) prototypes
		PhoneBook();
		~PhoneBook();
		void addPhoneBook();
		void searchPhoneBook();
		std::string truncate(const std::string &str, size_t width);
		void printall();
};
