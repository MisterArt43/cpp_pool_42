#include "./FragTrap.hpp"

int main(void)
{
	FragTrap a("bob", 12, 25, 10);
	FragTrap b("billy", 42, 3, 5);
	FragTrap c;

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
	
	b.highFivesGuys();
	std::cout << "\n";
}