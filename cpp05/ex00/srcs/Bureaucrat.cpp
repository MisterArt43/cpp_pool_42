#include "../includes/Bureaucrat.hpp"

std::string	Bureaucrat::getName() const
{
	return this->_name;
}
size_t	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::promote() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooLowException();
	this->_grade--;
}
void	Bureaucrat::demote() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade++;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (&ref == this)
		return *this;
	this->_grade = ref._grade;
	this->_name = ref._name;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	this->_grade = ref._grade;
	this->_name = ref._name;
}

Bureaucrat::Bureaucrat(size_t grade, std::string name) :
_name(name)
{
	if (grade > 150 || grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat() :
_name(""),
_grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << "Name : " << ref.getName() << " Grade : " << ref.getGrade() << std::endl;
	return os;
}