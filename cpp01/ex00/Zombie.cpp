#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name()
{
	return (this->name);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie() {}