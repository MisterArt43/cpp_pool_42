#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name()
{
	return (this->_name);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->_name = name;
	std::cout << "{log} Zombie created" << std::endl;	
}

Zombie::~Zombie() 
{
	std::cout << "{log} Zombie destroyed" << std::endl;
}

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie z_tab[n]
	for (int i = 0; i < n; i++)
	{
		z_tab[i] = newZombie(name);
	}
}