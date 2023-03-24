#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Form.hpp"

int main()
{
	{
		std::string	p1 = "Jean";
		std::string	p2 = "Robert";
		std::string	p3 = "Chirstine";
		std::string	p4 = "Claire";
		Bureaucrat b1;
		Bureaucrat b2(5, p1);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << "\nNew try:" << std::endl;
		try{
			std::cout << b1 << std::endl;
			std::cout << "decremente" << std::endl;
			b1.demote();
			std::cout << b1 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nNew try:" << std::endl;
		try{
			std::cout << b2 << std::endl;
			std::cout << "incremente" << std::endl;
			b2.promote();
			std::cout << b2 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nNew try:" << std::endl;
		try {
			std::cout << "Try creation Bureaucrat avec une grade de -1" << std::endl;
			Bureaucrat b3(-1, p2);
			std::cout << b3 << std::endl;
		}catch(std::exception const &e){
			std::cerr << p2 << " " << e.what() << std::endl;
		}
		std::cout << "\nNew try:" << std::endl;
		try {
			std::cout << "Try creation Bureaucrat avec une grade de 151" << std::endl;
			Bureaucrat b4(151, "Exception");
			std::cout << b4 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nNew try:" << std::endl;
		try{
			std::cout << "Try creation Bureaucrat avec grade 150 et update" << std::endl;
			Bureaucrat b5(150, "smith");
			std::cout << b5 << std::endl;
			b5.demote();
			std::cout << b5 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nNew try:" << std::endl;
		try{
			std::cout << "Try creation Bureaucrat avec grade 150 et update" << std::endl;
			Bureaucrat b5(0, "main");
			std::cout << b5 << std::endl;
			b5.promote();
			std::cout << b5 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Bureaucrat supervisor(1, "Supervisor");
		std::cout << supervisor << std::endl;
		Bureaucrat francis(25, "Francis");
		std::cout << francis << std::endl;

		Form *shrub = new ShrubberyCreationForm("home");
		std::cout << *shrub << std::endl;
		shrub->beSigned(supervisor);
		shrub->execute(francis);

		Form *pres = new PresidentialPardonForm("Francis");
		std::cout << *pres << std::endl;
		supervisor.signForm(*pres);
		pres->execute(supervisor);

		Form *robot = new RobotomyRequestForm("Bender");
		std::cout << *robot << std::endl;
		robot->beSigned(supervisor);
		robot->execute(francis);
		francis.executeForm(*robot);
		francis.executeForm(*robot);

		std::cout << "---" << std::endl;

		try
		{
			francis.executeForm(*pres);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			RobotomyRequestForm robot = RobotomyRequestForm("Bender");
			std::cout << robot << std::endl;
			robot.execute(supervisor);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			PresidentialPardonForm pres = PresidentialPardonForm("Francis");
			std::cout << pres << std::endl;
			supervisor.signForm(pres);
			pres.execute(francis);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			PresidentialPardonForm pres = PresidentialPardonForm("Francis");
			std::cout << pres << std::endl;
			supervisor.signForm(pres);
			francis.executeForm(pres);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		delete shrub;
		delete pres;
		delete robot;
	}
	return 0;
}
