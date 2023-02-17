#include "Phonebook.hpp"
#include <iomanip>
#include <stdlib.h>

PhoneBook::PhoneBook() : n(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add(Contact person)
{
	int i = n, j = n;

	(--(j*=-(i==n)))*=-(i==n); // more readeble efficiency, ofc
	n = j;
	// this->n++; //useless / deprecated / ok boomer
	this->person[7] = this->person[6];
	this->person[6] = this->person[5];
	this->person[5] = this->person[4];
	this->person[4] = this->person[3];
	this->person[3] = this->person[2];
	this->person[2] = this->person[1];
	this->person[1] = this->person[0];
	this->person[0] = person;
}

void	sub_ten_display(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0,9) + ".";
	std::cout << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << str;
}

void	PhoneBook::search()
{
	if (this->n == 0)
	{
		std::cout << "NO CONTACT ARE REGISTERED." << std::endl;
		return ;
	}
	std::cout << "...index..|first.name|.last.name|.nickname." << std::endl;
	for (int i = 0; i < 8 && i < this->n; i++)
	{
		std::cout << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << i;
		std::cout << "|";
		sub_ten_display(this->person[i].get_first_name());
		std::cout << "|";
		sub_ten_display(this->person[i].get_last_name());
		std::cout << "|";
		sub_ten_display(this->person[i].get_nickname ());
		std::cout << std::endl;
	}
	std::cout << "..........|..........|..........|.........." << std::endl;
	std::string str;
	std::cout << std::endl;
	std::cout << "Choose your index to see more : ";
	if (!std::getline(std::cin, str))
		exit(0);
	const char *test = str.c_str();
	while (*test)
	{
		if (*test < '0' || *test > '9')
		{
			std::cout << "INVALID INPUTE" << std::endl;
			return ;
		}
		test++;
	}
	int index = atoi(str.c_str());
	if (index < 0 || index > 7 || index >= this->n)
	{
		std::cout << "BAD INDEX" << std::endl;
		return ;
	}
	std::cout << "name : " << this->person[index].get_first_name() << std::endl \
	<< "last name : " << this->person[index].get_last_name() << std::endl \
	<< "nickname : " << this->person[index].get_nickname() << std::endl \
	<< "phone : " << this->person[index].get_phone() << std::endl \
	<< "secret : " << this->person[index].get_secret() << std::endl;
}