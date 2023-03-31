#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

class ScalarConverter
{

public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter();

	ScalarConverter &operator=(ScalarConverter const &rhs);

	void convert(char *arg);
private:
};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* SCALARCONVERTER_H */