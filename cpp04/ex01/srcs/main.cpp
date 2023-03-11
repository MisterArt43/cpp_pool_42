#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
// #include "../includes/WrongDog.hpp"
// #include "../includes/WrongCat.hpp"

int main()
{
	//Avec virtual
	Animal test_for_next_ex;
	size_t nb = 20;

	Animal* tab[nb];
	for (size_t i = 0; i < nb; i++)
	{
		if (i >= nb / 2)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	Cat *copy = new Cat();
	Cat *past = new Cat(*copy);
	std::cout << std::endl << "Constructor by copy work as required : " << std::endl 
	<< "copy : " << &copy << " | past : " << &past << std::endl;
	copy->getBrain()->displayIdea(5);
	std::cout << std::endl;
	past->getBrain()->displayIdea(5);

	std::cout << std::endl;
	copy->getBrain()->setIdea(0, "copy");
	past->getBrain()->setIdea(0, "past");

	copy->getBrain()->displayIdea(2);
	std::cout << std::endl;
	past->getBrain()->displayIdea(2);
	delete copy;
	delete past;
	std::cout << std::endl;
	

	for (size_t i = 0; i < nb; i++)
	{
		std::cout << i << " : ";
		tab[i]->makeSound();
	}
	for (size_t i = 0; i < nb; i++)
		delete tab[i];

	return 0;
}
