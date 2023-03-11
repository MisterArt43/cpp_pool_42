#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	//Avec virtual
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	
	//Sans Virtual
	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *k = new WrongDog();
	const WrongAnimal *g = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << g->getType() << " " << std::endl;
	g->makeSound(); // will output the cat sound!
	k->makeSound();
	beta->makeSound();
	delete k;
	delete g;
	delete beta;
	return 0;
}
