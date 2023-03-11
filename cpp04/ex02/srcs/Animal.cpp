#include "../includes/Animal.hpp"

std::string	Animal::getType() const
{
	return this->_Type;
}

void	Animal::makeSound(void) const
{
	std::cout << "animal sound" << std::endl;
}

Animal&	Animal::operator=(const Animal& animal)
{
	this->_Type = animal._Type;
	return *this;
}

Animal::Animal(const Animal& animal) : _Type(animal._Type)
{
}

Animal::Animal() : _Type("Animal")
{
}

Animal::~Animal()
{
	//std::cout << "Destructor Animal Called" << std::endl;
}
