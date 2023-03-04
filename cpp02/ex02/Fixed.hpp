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
	
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	
	Fixed	operator*(const Fixed &) const;
	Fixed	operator/(const Fixed &) const;
	Fixed	operator+(const Fixed &) const;
	Fixed	operator-(const Fixed &) const;
	
	bool	operator>(const Fixed &) const;
	bool	operator<(const Fixed &) const;
	
	bool	operator>=(const Fixed &) const;
	bool	operator<=(const Fixed &) const;
	bool	operator==(const Fixed &) const;
	bool	operator!=(const Fixed &) const;

	int		getRawBits(void) const;
	void	setRawBits(int const);

	Fixed(int const raw);
	Fixed(float const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed&	max(Fixed&, Fixed&);
	static const Fixed&	max(const Fixed&,const Fixed&);
	static Fixed&	min(Fixed&, Fixed&);
	static const Fixed&	min(const Fixed&,const Fixed&);
};

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed);
#endif