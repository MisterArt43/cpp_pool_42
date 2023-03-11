#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _Type;
public:
	Animal&	operator=(const Animal&);
	Animal(const Animal&);

	Animal();
	virtual ~Animal();

	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif