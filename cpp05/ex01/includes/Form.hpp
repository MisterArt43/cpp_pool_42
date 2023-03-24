#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
private:
	std::string	_name;
	bool		_isSigned;
	size_t		_gradeToExecute;
	size_t		_gradeToSigne;
public:
	Form& operator=(const Form&);

	std::string	getName() const;
	bool		getIsSigned() const;
	size_t		getGradeToExecute() const;
	size_t		getGradeToSigne() const;

	void beSigned(Bureaucrat& employee);

	Form(const Form&);
	Form();
	Form(std::string, size_t, size_t);
	~Form();

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
	class AlreadySignedException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Form already signed"; }
	};
};

std::ostream&	operator<<(std::ostream& os, const Form& ref);
# include "./Bureaucrat.hpp"

#endif