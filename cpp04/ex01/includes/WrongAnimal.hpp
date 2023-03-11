#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string _Type;
public:
	WrongAnimal&	operator=(const WrongAnimal&);
	WrongAnimal(const WrongAnimal&);

	WrongAnimal();
	~WrongAnimal();

	std::string	getType() const;
	void	makeSound() const;
};

#endif