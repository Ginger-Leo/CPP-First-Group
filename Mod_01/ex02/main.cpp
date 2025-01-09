#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string; 
    std::string& stringREF = string;
   
    std::cout << "Memory of String    : " << &string << std::endl;
    std::cout << "Memory of String PTR: " << &stringPTR << std::endl;
    std::cout << "Memory of String REF: " << &stringREF << std::endl << std::endl;

    std::cout << "Value of String     : " << string << std::endl;
    std::cout << "Value of String PTR : " << *stringPTR << std::endl;
    std::cout << "Value of String REF : " << stringREF << std::endl;

    return 42;
}
