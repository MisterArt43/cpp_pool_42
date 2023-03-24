#include "../includes/Form.hpp"

void Form::beSigned(Bureaucrat& employee)
{
	if (employee.getGrade() < this->_gradeToSigne)
		throw Form::GradeTooLowException();
	if (this->_isSigned == true)
		throw Form::AlreadySignedException();
	this->_isSigned = true;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

size_t Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

size_t Form::getGradeToSigne() const
{
	return this->_gradeToSigne;
}

std::ostream&	operator<<(std::ostream& o, Form const & form)
{
	o << "|Name : " << form.getName() << " \n|" 
	<< "isSigned : " << form.getIsSigned() << " \n|" 
	<< "gardeToSign : " << form.getGradeToSigne() << " \n|" 
	<< "gradeToExecute : " << form.getGradeToExecute() << ".";
	return (o);
}

Form::Form(std::string name, size_t grade_exec, size_t grade_sign) :
_name(name),
_isSigned(false)
{
	if (grade_exec < 1 || grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_exec > 150 || grade_sign > 150)
		throw Form::GradeTooLowException();

	this->_gradeToExecute = grade_exec;
	this->_gradeToSigne = grade_sign;
}

Form::Form() : 
_name(""), 
_isSigned(false), 
_gradeToExecute(150), 
_gradeToSigne(150)
{
}

Form::~Form()
{
}

Form::Form( const Form& src ) : 
_name( src.getName() ), 
_gradeToExecute( src.getGradeToExecute() ), 
_gradeToSigne( src.getGradeToSigne() ) 
{}