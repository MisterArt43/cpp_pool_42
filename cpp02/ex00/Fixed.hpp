#include <iostream>
#include <string>

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
};
