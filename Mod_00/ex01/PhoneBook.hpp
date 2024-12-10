#pragma once

#include <iostream>
#include <string>
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
		void printall();
};
