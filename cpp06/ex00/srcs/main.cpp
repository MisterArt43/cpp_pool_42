#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

int main(int argc, char **argv)
{
	double	d;
	char	c;

	if (argc != 2)
		return 1;
	if (std::string(argv[1]).length() == 1 && !std::isdigit(static_cast<int>(argv[1][0])))
		d = static_cast<int>(argv[1][0]);
	else
		d = strtod(argv[1], NULL);
	c = static_cast<char>(d);
	d = static_cast<double>(d);
	if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
	{
		if (c >= 0 && c < 127)
		{
			if (std::isprint(c))
				std::cout << "char : '" << c << "'" << std::endl;
			else
				std::cout << "char : non displayable" << std::endl;
		}
		else
			std::cout << "char : impossible" << std::endl;
	}
	else
		std::cout << "char : impossible" << std::endl;
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double : " << d << std::endl;
	return 0;
}