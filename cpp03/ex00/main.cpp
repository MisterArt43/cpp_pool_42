#include "./ClapTrap.hpp"

int main(void)
{
	ClapTrap a("bob", 12, 25, 10);
	ClapTrap b("billy", 42, 3, 5);
	ClapTrap c;

	c = b;

	c.attack(a.getName());
	a.takeDamage(c.getAttack());

	c.attack(a.getName());
	a.takeDamage(c.getAttack());
	
	c.attack(a.getName());
	a.takeDamage(c.getAttack());
	
	c.attack(a.getName());
	a.takeDamage(c.getAttack());

	b.beRepaired(25);
	a.beRepaired(50);
}