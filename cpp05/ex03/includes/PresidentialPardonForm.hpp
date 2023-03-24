/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:56:13 by abucia            #+#    #+#             */
/*   Updated: 2023/03/16 01:56:26 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "./Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string&);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void execute( const Bureaucrat& executor ) const;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif /* PRESIDENTIALPARDONFORM_H */