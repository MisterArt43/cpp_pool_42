#include "./HumanA.hpp"

/**
 * @brief set the weapon of HumanA
 * @param weapon 
 */
void	HumanA::setWeapon(Weapon& weapon)
{ this->_weapon = weapon; }
/**
 * @brief set the name of HumanA
 * @param name 
 */
void	HumanA::setName(std::string name)
{ this->_name = name; }

/**
 * @brief get the weapon of HuamnA
 * @return Weapon
 */
Weapon*	HumanA::getWeapon()
{ return &this->_weapon; }
/**
 * @brief get the name of HumanA
 * @return string
 */
std::string&	HumanA::getName()
{ return this->_name; }

/**
 * @brief display an attack of humanA in the console
 */
void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/**
 * @brief Human A constructor
 * @param name string
 * @param weapon Weapon
 */
HumanA::HumanA(std::string name, Weapon& weapon) :_name(name), _weapon(weapon)
{
	std::cout << "HumanA created" << std::endl;
}

/**
 * @brief HumanA destructor
 */
HumanA::~HumanA()
{
	std::cout << "HumanA destroyed" << std::endl;
}