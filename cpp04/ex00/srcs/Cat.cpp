#include "../includes/Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound" << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	this->_Type = cat._Type;
	return *this;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	this->_Type = cat._Type;
}

Cat::Cat()
{
	this->_Type = "Cat";
}

Cat::~Cat()
{
}