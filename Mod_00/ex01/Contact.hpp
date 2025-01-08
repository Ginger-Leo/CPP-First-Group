#pragma once

#include <iostream>
#include <string>

class Contact
{
	private: //class information
		int _index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public: //class function (methods) prototypes
		Contact();
		~Contact();
		int getIndex();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		void setIndex(int x);
		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickName(std::string);
		void setPhoneNumber(std::string);
		void setDarkestSecret(std::string);
};

