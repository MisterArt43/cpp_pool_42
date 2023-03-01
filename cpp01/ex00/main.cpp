#include "./Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("bob");
    std::cout << "Hello " << z->get_name() << "." << std::endl;
    z->announce();
    delete z;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Zombie zonzon("billy");
    std::cout << "Hello " << zonzon.get_name() << ". can i rename you ?" << std::endl;
    zonzon.set_name("renamed");
    std::cout << "Hello " << zonzon.get_name() << "." << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    randomChump("randomChump");
	return 0;
}