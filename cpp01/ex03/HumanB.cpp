#include "./HumanB.hpp"

/**
 * @brief set the weapon of HumanB
 * @param weapon 
 */
void	HumanB::setWeapon(Weapon& weapon)
{ this->_weapon = &weapon; }
/**
 * @brief set the name of HumanB
 * @param name 
 */
void	HumanB::setName(std::string name)
{ this->_name = name; }

/**
 * @brief return the current weapon | NULL if none
 * @return Weapon | NULL
 */
Weapon*	HumanB::getWeapon()
{ return this->_weapon; }
/**
 * @brief return the name 
 * @return string
 */
std::string&	HumanB::getName()
{ return this->_name; }

/**
 * @brief display an attack message in the console
 */
void	HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " try to attack but don't have any weapon..." << std::endl;
}

/**
 * @brief HumanB constructor
 * @param name 
 */
HumanB::HumanB(std::string name) :_name(name), _weapon(NULL)
{
	std::cout << "HumanB created" << std::endl;
}

/**
 * @brief HumanB destructor
 */
HumanB::~HumanB()
{
	std::cout << "HumanB destroyed" << std::endl;
}