#include "../includes/WrongDog.hpp"

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog sound" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& Wrongdog)
{
	this->_Type = Wrongdog._Type;
	return *this;
}

WrongDog::WrongDog(const WrongDog& Wrongdog) : WrongAnimal(Wrongdog)
{
	this->_Type = Wrongdog._Type;
}

WrongDog::WrongDog()
{
	this->_Type = "WrongDog";
}

WrongDog::~WrongDog()
{
}
