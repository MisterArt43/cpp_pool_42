#include "../includes/Dog.hpp"

Brain* Dog::getBrain()
{
	return this->_Brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound" << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	delete this->_Brain;
	this->_Brain = new Brain(*dog._Brain);
	this->_Type = dog._Type;
	return *this;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	this->_Brain = new Brain(*dog._Brain);
	this->_Type = dog._Type;
}

Dog::Dog() : _Brain(new Brain())
{
	this->_Type = "Dog";
}

Dog::~Dog()
{
	delete this->_Brain;
	//std::cout << "Destructor Dog Called" << std::endl;
}
