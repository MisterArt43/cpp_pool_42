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
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}
void	Bureaucrat::demote() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
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
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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

void Bureaucrat::signForm(Form& fuckcpp)
{
	if (fuckcpp.getGradeToSigne() < this->_grade)
		std::cout << this->_name << " couldn’t sign " << fuckcpp.getName() << " because "
		 << "his grade is " << this->_grade << " and the minimum requirement is "
		 << fuckcpp.getGradeToSigne() << std::endl;
	else if (fuckcpp.getIsSigned())
	{
		fuckcpp.beSigned(*this);
		std::cout << this->_name << " signed " << fuckcpp.getName() << std::endl;
	}
}