#include "./Zombie.hpp"

int main(void)
{
	const int nb = 20;
    Zombie *z = zombieHorde(nb, "bob");
	for (size_t i = 0; i < nb; i++)
	{
		std::cout << "Hello " << z[i].get_name() << "." << std::endl;
		z[i].announce();
	}
	delete [] z;
	return 0;
}