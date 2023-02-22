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
    std::cout << "Hello " << zonzon.get_name() << "." << std::endl;
    zonzon.set_name("rename");
    std::cout << "Hello " << zonzon.get_name() << "." << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    randomChump("randomChump");
}