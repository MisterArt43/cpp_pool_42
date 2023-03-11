#ifndef CAT_H
# define CAT_H

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
private:
	Brain* _Brain;
public:
	Cat();
	Cat(const Cat&);
	virtual ~Cat();

	Brain* getBrain();
	void makeSound() const;

	Cat &operator=(const Cat &);
};

#endif