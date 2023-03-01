#include "PhoneBook.hpp"
#include <stdlib.h>
#include <stdio.h>

void add_contact(PhoneBook &book)
{
	std::string str;
	Contact new_contact;
	std::cout << "FIRST NAME : " << std::endl;
	if (!std::getline(std::cin, str))
		exit(0);
	if (!(str.length() > 0))
		exit(0);
	std::cout << str.length() << std::endl;
	new_contact.set_first_name(str);
	std::cout << "LAST NAME : " << std::endl;
	if (!std::getline(std::cin, str))
		exit(0);
	if (!(str.length() > 0))
		exit(0);
	new_contact.set_last_name(str);
	std::cout << "NICKNAME : " << std::endl;
	if (!std::getline(std::cin, str))
		exit(0);
	if (!(str.length() > 0))
		exit(0);
	new_contact.set_nickname(str);
	std::cout << "PHONE : " << std::endl;
	if (!std::getline(std::cin, str))
		exit(0);
	if (str.length() != 10)
		exit(0);
	const char *test = str.c_str();
	while (*test)
	{
		if (*test < '0' || *test > '9')
		{
			std::cout << "INVALID INPUTE" << std::endl;
			exit(0);
		}
		test++;
	}
	new_contact.set_phone(str);
	std::cout << "SECRET : " << std::endl;
	if (!std::getline(std::cin, str))
		exit(0);
	if (!(str.length() > 0))
		exit(0);
	new_contact.set_secret(str);
	book.add(new_contact);
}

/**
 * @brief DEBUG TESTER
*/
// PhoneBook debug()
// {
// 	PhoneBook book;

// 	for (size_t i = 0; i < 2; i++)
// 	{
// 		Contact new_c;
		
// 		new_c.set_first_name("testttttttttttttttttttttttttt");
// 		new_c.set_last_name("test");
// 		new_c.set_nickname("test");
// 		new_c.set_phone("0000000000");
// 		new_c.set_secret("test");
// 		book.add(new_c);
// 		new_c.set_first_name("test1");
// 		new_c.set_last_name("test1");
// 		new_c.set_nickname("test1");
// 		new_c.set_phone("0000000001");
// 		new_c.set_secret("test1");
// 		book.add(new_c);
// 		new_c.set_first_name("test2");
// 		new_c.set_last_name("test2");
// 		new_c.set_nickname("test2");
// 		new_c.set_phone("0000000002");
// 		new_c.set_secret("test2");
// 		book.add(new_c);
// 		new_c.set_first_name("test3");
// 		new_c.set_last_name("test3");
// 		new_c.set_nickname("test3");
// 		new_c.set_phone("0000000003");
// 		new_c.set_secret("test3");
// 		book.add(new_c);
// 	}
// 	return (book);
// }

/**
 * @brief MAIN FUNCTION
*/
int	main(void)
{
	std::string str;
	PhoneBook book;

	//book = debug();
	while (1)
	{
		std::cout << "COMMAND AVAIBLE : \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
		if (!std::getline(std::cin, str))
			exit(0);
		if (str == "ADD") {
			add_contact(book);
		}
		else if (str == "SEARCH") {
			book.search();
		}
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "BAD ARG" << std::endl;
	}
	return 0;
}