#include "./Weapon.hpp"

/*** SETTER ***/

void		Weapon::setType(std::string type) {this->_type = type;}

/*** GETTER ***/

const std::string	&Weapon::getType(void) {return _type;}

/*** CONSTRUCTOR ***/

Weapon::Weapon(std::string type) : _type (type)
{
	std::cout << "Weapon created" << std::endl;
}

/*** DESTRUCTOR ***/

Weapon::~Weapon()
{
	std::cout << "Weapon Destroyed" << std::endl;
}