#include "./ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_pt)
	{
		this->_energy_pt--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "not enougth energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int nb)
{
	if (nb <= this->_hit_pt)
	{
		this->_hit_pt -= nb;
		std::cout << this->_name << " Take " << nb << " Damage. Now at " << this->_hit_pt << std::endl;
	}
	else
	{
		this->_hit_pt = 0;
		std::cout << this->_name << " take too much damage and is now dead." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int nb)
{
	if (this->_energy_pt)
	{
		this->_energy_pt--;
		this->_hit_pt += nb;
		std::cout << this->_name << " Was Healed to " << nb << " Point(s).\n Now at " << this->_hit_pt << std::endl;
	}
	else
		std::cout << "not enougth energy" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getAttack() const
{
	return this->_attack_dmg;
}

unsigned int	ClapTrap::getEnergy() const
{
	return this->_energy_pt;
}

unsigned int	ClapTrap::getHit() const
{
	return this->_hit_pt;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	if (&claptrap != this)
	{
		this->_attack_dmg = claptrap.getAttack();
		this->_energy_pt = claptrap.getEnergy();
		this->_hit_pt = claptrap.getHit();
		this->_name = claptrap.getName();
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	this->_attack_dmg = claptrap.getAttack();
	this->_energy_pt = claptrap.getEnergy();
	this->_hit_pt = claptrap.getHit();
	this->_name = claptrap.getName();
	std::cout << "Copy Constructor ClapTrap Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit, unsigned int energy, unsigned int attack)
: _name(name),
_hit_pt(hit),
_energy_pt(energy),
_attack_dmg(attack)
{
	std::cout << "Constructor ClapTrap Called" << std::endl;
}

ClapTrap::ClapTrap()
: _name(""),
_hit_pt(10),
_energy_pt(10),
_attack_dmg(0)
{
	std::cout << "Default Constructor ClapTrap Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap Called" << std::endl;
}