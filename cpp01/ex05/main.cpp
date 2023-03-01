#include "./Harl.hpp"
#include <sstream>

int main(void)
{
	Harl p3;

	std::string str(" ");

	std::cout << "Put an empty answer to exit" << std::endl;
	while (str.length() > 0)
	{
		std::cout << "Harl $>" << std::endl;
		if (!std::getline(std::cin, str))
			break;
		p3.complain(str);
	}
	return 0;
}
