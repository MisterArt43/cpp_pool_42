#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "./WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat&);
	~WrongCat();

	void makeSound() const;

	WrongCat &operator=(const WrongCat &);
};

#endif