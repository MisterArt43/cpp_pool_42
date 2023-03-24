/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:56:13 by abucia            #+#    #+#             */
/*   Updated: 2023/03/24 21:45:42 by abucia           ###   ########lyon.fr   */
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

#endif /* PRESIDENTIALPARDONFORM_H */