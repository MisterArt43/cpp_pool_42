# include "./Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const rawBits)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = rawBits;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}


Fixed::Fixed(int const raw)
:_value(raw << this->_bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw)
:_value((int)(std::ceil(raw * (1 << this->_bits))))
{
	//std::cout << "Float constructor called" << std::endl;
}


float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

Fixed::Fixed(const Fixed& fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed.getRawBits();
}

Fixed::Fixed()
: _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed& a,const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed&	Fixed::min(const Fixed& a,const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}


Fixed&	Fixed::operator++()
{
	this->_value++;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	this->_value++;
	return old;
}
Fixed&	Fixed::operator--()
{
	this->_value--;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return old;
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{ return (this->toFloat() * fixed.toFloat()); }
Fixed	Fixed::operator/(const Fixed &fixed) const
{ return (this->toFloat() / fixed.toFloat()); }
Fixed	Fixed::operator+(const Fixed &fixed) const
{ return (this->toFloat() + fixed.toFloat()); }
Fixed	Fixed::operator-(const Fixed &fixed) const
{ return (this->toFloat() - fixed.toFloat()); }

bool	Fixed::operator==(const Fixed &fixed) const
{ return (this->toFloat() == fixed.toFloat()); }
bool	Fixed::operator!=(const Fixed &fixed) const
{ return (this->toFloat() != fixed.toFloat()); }
bool	Fixed::operator>(const Fixed &fixed) const
{ return (this->toFloat() > fixed.toFloat()); }
bool	Fixed::operator<(const Fixed &fixed) const
{ return (this->toFloat() < fixed.toFloat()); }
bool	Fixed::operator>=(const Fixed &fixed) const
{ return (this->toFloat() >= fixed.toFloat()); }
bool	Fixed::operator<=(const Fixed &fixed) const
{ return (this->toFloat() <= fixed.toFloat()); }