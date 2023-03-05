#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);

	void attack(const std::string&);
	void  guardGate();

	ScavTrap();
	ScavTrap(std::string, unsigned int hit, unsigned int energy, unsigned int attack);
	~ScavTrap();
};

#endif