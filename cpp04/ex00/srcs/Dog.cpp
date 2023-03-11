#include "../includes/Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound" << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	this->_Type = dog._Type;
	return *this;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	this->_Type = dog._Type;
}

Dog::Dog()
{
	this->_Type = "Dog";
}

Dog::~Dog()
{
}
