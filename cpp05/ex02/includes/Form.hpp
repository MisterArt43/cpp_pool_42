/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:56:16 by abucia            #+#    #+#             */
/*   Updated: 2023/03/16 06:48:55 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

	virtual void beSigned(Bureaucrat employee);

	virtual void execute(const Bureaucrat&) const = 0;

	Form(const Form&);
	Form();
	Form(std::string, size_t, size_t);
	virtual ~Form();

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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw() { return "Form not signed"; }
	};
};

std::ostream&	operator<<(std::ostream& os, const Form& ref);

# include "./Bureaucrat.hpp"
#endif