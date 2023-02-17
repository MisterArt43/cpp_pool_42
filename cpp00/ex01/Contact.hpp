#include <string>
#include <iostream>
#include <sstream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
	public:
		void		set_first_name(std::string first_name);
		void		set_last_name(std::string last_name); 
		void		set_nickname(std::string nickname);
		void		set_phone(std::string phone);
		void		set_secret(std::string secret);
		std::string	get_first_name();
		std::string	get_last_name(); 
		std::string	get_nickname();
		std::string	get_phone();
		std::string	get_secret();
		Contact();
		~Contact();
};
