#ifndef HUMANA_H
# define HUMANA_H
# include "./Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	setWeapon(Weapon& weapon);
	void	setName(std::string name);

	Weapon*			getWeapon();
	std::string&	getName();
	void			attack() const;
};

#endif