#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();

		std::string	get_name();
		void		set_name(std::string);

		void	announce();
};

	//--- function ---//

	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);