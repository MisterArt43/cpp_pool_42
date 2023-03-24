#include "../includes/Bureaucrat.hpp"
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
			std::cout << "Try creation Bureaucrat avec une grade de 0" << std::endl;
			Bureaucrat b3(0, p2);
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
			std::cout << "Try creation Bureaucrat avec grade 0 et update" << std::endl;
			Bureaucrat b5(0, "main");
			std::cout << b5 << std::endl;
			b5.promote();
			std::cout << b5 << std::endl;
		}catch(std::exception const &e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Bureaucrat francis(100, "Francis");
		std::cout << francis << std::endl;

		Form form1("Taxes", 100, 50);
		std::cout << form1 << std::endl;
		form1.beSigned(francis);
		std::cout << form1 << std::endl;

		std::cout << "---" << std::endl;

		Form form2("NDA", 99, 50);
		std::cout << form2 << std::endl;
		try
		{
			francis.signForm(form2);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << form2 << std::endl;

		std::cout << "---" << std::endl;

		Form form3("Other Paper", 101, 50);
		std::cout << form3 << std::endl;
		francis.signForm(form3);
		std::cout << form3 << std::endl;
		try
		{
			francis.signForm(form3);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << form3 << std::endl;

		std::cout << "---" << std::endl;

		try
		{
			Form formException("NDA", 99, 50);
			std::cout << formException << std::endl;
			formException.beSigned(francis);
			std::cout << formException << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			Form formException("Important Form", 1000, 50);
			std::cout << formException << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			Form formException("Important Form", 0, 50);
			std::cout << formException << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			Form formException("Important Form", 100, 1000);
			std::cout << formException << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---" << std::endl;

		try
		{
			Form formException("Important Form", 100, 0);
			std::cout << formException << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	

	return 0;
}
