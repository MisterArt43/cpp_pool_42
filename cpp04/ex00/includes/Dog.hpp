#ifndef DOG_H
# define DOG_H

# include "./Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog&);
	~Dog();

	void makeSound() const;

	Dog &operator=(const Dog &);
};

#endif