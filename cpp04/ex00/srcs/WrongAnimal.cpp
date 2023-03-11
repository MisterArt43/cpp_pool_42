#include "../includes/WrongAnimal.hpp"

std::string	WrongAnimal::getType() const
{
	return this->_Type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wronganimal sound" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& Wronganimal)
{
	this->_Type = Wronganimal._Type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Wronganimal) : _Type(Wronganimal._Type)
{
}

WrongAnimal::WrongAnimal() : _Type("WrongAnimal")
{
}

WrongAnimal::~WrongAnimal()
{
}
