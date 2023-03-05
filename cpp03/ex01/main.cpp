#include "./ScavTrap.hpp"

int main(void)
{
	ScavTrap a("bob", 12, 25, 10);
	ScavTrap b("billy", 42, 3, 5);
	ScavTrap c;

	std::cout << "\n";
	
	c = b;

	c.attack(a.getName());
	a.takeDamage(c.getAttack());

	c.attack(a.getName());
	a.takeDamage(c.getAttack());
	
	c.attack(a.getName());
	a.takeDamage(c.getAttack());
	
	c.attack(a.getName());
	a.takeDamage(c.getAttack());
	
	std::cout << "\n";

	b.beRepaired(25);
	a.beRepaired(50);

	std::cout << "\n";
	
	b.guardGate();
	std::cout << "\n";
}