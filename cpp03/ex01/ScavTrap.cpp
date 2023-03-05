#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy_pt)
	{
		this->_energy_pt--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "not enougth energy" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	if (&scavtrap != this)
	{
		this->_attack_dmg = scavtrap.getAttack();
		this->_energy_pt = scavtrap.getEnergy();
		this->_hit_pt = scavtrap.getHit();
		this->_name = scavtrap.getName();
	}
	return *this;
}

void  ScavTrap::guardGate()
{
	std::cout << this->_name << " enter in Gate Keeper Mod." << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "Default Constructor ScavTrap Called" << std::endl;
	this->_name = "";
	this->_hit_pt = 100;
	this->_energy_pt = 50;
	this->_attack_dmg = 20;
}
ScavTrap::ScavTrap(std::string name, unsigned int hit, unsigned int energy, unsigned int attack)
{
	std::cout << "Constructor ScavTrap Called" << std::endl;
	this->_name = name;
	this->_hit_pt = hit;
	this->_energy_pt = energy;
	this->_attack_dmg = attack;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap Called" << std::endl;
}