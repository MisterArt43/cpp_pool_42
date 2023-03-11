#ifndef WRONGDOG_H
# define WRONGDOG_H

# include "./WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog&);
	~WrongDog();

	void makeSound() const;

	WrongDog &operator=(const WrongDog &);
};

#endif