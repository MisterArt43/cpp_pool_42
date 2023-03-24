/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:56:20 by abucia            #+#    #+#             */
/*   Updated: 2023/03/16 06:49:22 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

	void signForm(Form& fuckcpp);
	void executeForm(const Form& iLoveCpp);

	void promote();
	void demote();

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

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref);

# include "./Form.hpp"
#endif