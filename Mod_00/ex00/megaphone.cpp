#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::string str;
        int i = 1;
        while (argv[i])
        {
            str += argv[i];
            i++;
        }
		i = 0;
		while (str[i])
		{
			str[i] = std::toupper(static_cast<unsigned char>(str[i]));
			i++;
		}
		std::cout << str << std::endl;
	}
	else	
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}

