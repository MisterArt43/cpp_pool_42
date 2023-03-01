#include <iostream>
#include <string>

int main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "STR    L’ADRESSE : " << &str << std::endl;
	std::cout << "STRPTR L’ADRESSE : " << stringPTR << std::endl;
	std::cout << "STRREF L’ADRESSE : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "STR    L’ADRESSE : " << str << std::endl;
	std::cout << "STRPTR L’ADRESSE : " << *stringPTR << std::endl;
	std::cout << "STRREF L’ADRESSE : " << stringREF << std::endl;

	return 0;
}