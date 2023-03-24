#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
private:
	std::string _name;
	size_t _grade;
public:
	Bureaucrat& operator=(const Bureaucrat&);

	Bureaucrat();
	Bureaucrat(size_t, std::string);
	Bureaucrat(const Bureaucrat&);

	std::string getName() const;
	size_t getGrade() const;

	void promote();
	void demote();
	
	void signForm(Form& fuckcpp);

	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too low"; }
	};
};

# include "./Form.hpp"
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref);

#endif