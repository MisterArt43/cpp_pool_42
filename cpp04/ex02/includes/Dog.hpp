#ifndef DOG_H
# define DOG_H

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
private:
	Brain* _Brain;
public:
	Dog();
	Dog(const Dog&);
	virtual ~Dog();

	Brain* getBrain();
	void makeSound() const;

	Dog &operator=(const Dog&);
};

#endif