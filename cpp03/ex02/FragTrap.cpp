#include "FragTrap.hpp"

FragTrap& FragTrap::operator=(const FragTrap& FragTrap)
{
	if (&FragTrap != this)
	{
		this->_attack_dmg = FragTrap.getAttack();
		this->_energy_pt = FragTrap.getEnergy();
		this->_hit_pt = FragTrap.getHit();
		this->_name = FragTrap.getName();
	}
	return *this;
}

void  FragTrap::highFivesGuys()
{
	std::cout << this->_name << " High Five !" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "Default Constructor FragTrap Called" << std::endl;
	this->_name = "";
	this->_hit_pt = 100;
	this->_energy_pt = 100;
	this->_attack_dmg = 30;
}
FragTrap::FragTrap(std::string name, unsigned int hit, unsigned int energy, unsigned int attack)
{
	std::cout << "Constructor FragTrap Called" << std::endl;
	this->_name = name;
	this->_hit_pt = hit;
	this->_energy_pt = energy;
	this->_attack_dmg = attack;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap Called" << std::endl;
}