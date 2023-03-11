#include "../includes/Brain.hpp"
#include <cstdlib>

void Brain::setIdea(int nb, std::string idea)
{
	if (nb >= 0 && nb < 100)
		this->_Ideas[nb] = idea;
}

const std::string& Brain::getIdea(int nb) const
{
	if (nb >= 0 && nb < 100)
		return this->_Ideas[nb];
	return (this->_Ideas[0]);
}

void Brain::displayIdea(size_t nb)
{
	for (size_t i = 0; i < nb; i++)
	{
		std::cout << this->_Ideas[i] << std::endl;
	}
}

Brain::Brain(const Brain& brain)
{
	for (size_t i = 0; i < 100; i++)
		this->_Ideas[i] = brain._Ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this == &brain)
		return *this;
	for (size_t i = 0; i < 100; i++)
		this->_Ideas[i] = brain._Ideas[i];
	return *this;
}

Brain::Brain()
{
	std::srand(time(NULL));
	std::string tab[5] = {"one","two","three","four","five"};
	for (size_t i = 0; i < 100; i++)
	{
		this->_Ideas[i] = tab[rand()%5];
	}
}

Brain::~Brain()
{
	std::cout << "Destructor Brain Called" << std::endl;
}
