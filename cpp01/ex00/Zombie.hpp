#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(/* args */);
		~Zombie();

		std::string	Zombie::get_name();
		void	Zombie::set_name(std::string);

		//--- function ---//

		Zombie*	newZombie(std::string name);
		void randomChump( std::string name );

		void	announce();
};
