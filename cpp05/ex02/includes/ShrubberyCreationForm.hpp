/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:56:06 by abucia            #+#    #+#             */
/*   Updated: 2023/03/16 01:56:24 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "./Form.hpp"
# include <iostream>
# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form
{

private:
	const std::string _target;

	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);

	void execute(const Bureaucrat &executor) const;
};

#endif /* SHRUBBERYCREATIONFORM_H */