#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_pt;
	int			_energy_pt;
	int			_attack_dmg;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void attack(const std::string&) const;
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
};

#endif