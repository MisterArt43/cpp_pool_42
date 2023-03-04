#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();

	Fixed&	operator=(const Fixed&);

	int		getRawBits(void) const;
	void	setRawBits(int const);

	Fixed(int const raw);
	Fixed(float const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed);
#endif