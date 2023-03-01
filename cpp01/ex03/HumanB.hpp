#ifndef HUMANB_H
# define HUMANB_H
# include "./Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	setName(std::string name);

	Weapon*			getWeapon();
	std::string&	getName();
	void			attack() const;
};

#endif