#include "./ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target) const
{
	std::cout << this->_name << " attack " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int nb)
{
	if (nb > this->_energy_pt)
	{
		this->_energy_pt -= nb;
		std::cout << this->_name << " Take " << nb << " Damage.\n Now at" << this->_energy_pt << std::endl;
	}
	else
	{
		this->_energy_pt = 0;
		std::cout << this->_name << " take too much damage and is now dead." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int nb)
{
	if (static_cast<int>(nb + this->_energy_pt) < 0)
	{
		this->_energy_pt += nb;
		std::cout << this->_name << " Was Healed to " << nb << " Point(s).\n Now at" << this->_energy_pt << std::endl;
	}
	else
	{
		this->_energy_pt = __INT32_MAX__;
		std::cout << this->_name << " was healed too much.\n Now at" << this->_energy_pt << std::endl;
	}
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
	
}

ClapTrap::ClapTrap() : _name("")
{
	
}

ClapTrap::~ClapTrap()
{
	
}