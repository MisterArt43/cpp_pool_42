#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);

	void  highFivesGuys(void);

	FragTrap();
	FragTrap(std::string, unsigned int hit, unsigned int energy, unsigned int attack);
	~FragTrap();
};

#endif