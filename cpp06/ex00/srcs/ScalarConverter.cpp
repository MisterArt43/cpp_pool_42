#include "../includes/ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScalarConverter::convert(char *arg)
{
	double	d;
	char	c;

	if (std::string(arg).length() == 1 && !std::isdigit(static_cast<int>(arg[0])))
		d = static_cast<int>(arg[0]);
	else
		d = strtod(arg, NULL);
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
	if (static_cast<double>(static_cast<int>(d)) == d)
	{
		std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl
		 << "double : " << d << ".0" << std::endl;
		return;
	}
	std::cout << "float : " << static_cast<float>(d) << "f" << std::endl
	 << "double : " << d << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */