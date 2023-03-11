#include "../includes/Cat.hpp"

Brain* Cat::getBrain()
{
	return this->_Brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound" << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	delete this->_Brain;
	this->_Brain = new Brain(*cat._Brain);
	this->_Type = cat._Type;
	return *this;
}

Cat::Cat(const Cat& cat) : Animal(cat) 
{
	this->_Brain = new Brain(*cat._Brain);
	this->_Type = cat._Type;
}

Cat::Cat() : _Brain(new Brain())
{
	this->_Type = "Cat";
}

Cat::~Cat()
{
	delete this->_Brain;
	//std::cout << "Destructor Cat Called" << std::endl;
}