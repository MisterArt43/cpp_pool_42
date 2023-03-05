#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string				_name;
	unsigned int			_hit_pt;
	unsigned int			_energy_pt;
	unsigned int			_attack_dmg;
public:
	ClapTrap();
	ClapTrap(std::string name, unsigned int hit, unsigned int energy, unsigned int attack);
	~ClapTrap();

	ClapTrap(const ClapTrap&);

	ClapTrap&	operator=(const ClapTrap&);

	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	std::string  getName() const;
	unsigned int  getHit() const;
	unsigned int  getEnergy() const;
	unsigned int  getAttack() const;
};

#endif