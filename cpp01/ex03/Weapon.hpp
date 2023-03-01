#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();

	void		setType(std::string);
	const std::string	&getType();
};

#endif