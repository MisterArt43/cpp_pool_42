#include "../includes/WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& Wrongcat)
{
	this->_Type = Wrongcat._Type;
	return *this;
}

WrongCat::WrongCat(const WrongCat& Wrongcat) : WrongAnimal(Wrongcat)
{
	this->_Type = Wrongcat._Type;
}

WrongCat::WrongCat()
{
	this->_Type = "WrongCat";
}

WrongCat::~WrongCat()
{
}