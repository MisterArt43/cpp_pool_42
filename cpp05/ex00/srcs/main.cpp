#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob(150, "bob");
		std::cout << "this is " << bob.getName() 
		<< ", he is starting his life with the grade " 
		<< bob.getGrade() << ", Wouah !" << std::endl;

		try {bob.demote();}
		catch (std::exception& e) {e.what();}

		try {bob.promote();}
		catch (std::exception& e) {e.what();}
	}
	catch (std::exception& e)
	{
		e.what();
	}

	try
	{
		Bureaucrat billy(1, "billy");
		std::cout << "this is " << billy.getName() 
		<< ", he is starting his life with the grade " 
		<< billy.getGrade() << ", he is very lucky !" << std::endl;

		
		try {billy.demote();}
		catch (std::exception& e) {e.what();}

		try {billy.promote();}
		catch (std::exception& e) {e.what();}
	}
	catch (std::exception& e)
	{
		e.what();
	}

	try
	{
		Bureaucrat WrongBilly(-50, "WrongBilly");
		std::cout << "this is " << WrongBilly.getName() 
		<< ", he is starting his life with the grade " 
		<< WrongBilly.getGrade() << ", he is very lucky !" << std::endl;

		try {WrongBilly.demote();}
		catch (std::exception& e) {e.what();}

		try {WrongBilly.promote();}
		catch (std::exception& e) {e.what();}
	}
	catch (std::exception& e)
	{
		e.what();
	}

	return 0;
}
