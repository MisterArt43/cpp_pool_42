#ifndef CAT_H
# define CAT_H

# include "./Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat&);
	~Cat();

	void makeSound() const;

	Cat &operator=(const Cat &);
};

#endif