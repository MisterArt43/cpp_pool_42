/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:34:09 by abucia            #+#    #+#             */
/*   Updated: 2023/05/18 07:34:09 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
void easyfind(T &array, int value)
{
	if (std::find(array.begin(), array.end(), value) != array.end())
		std::cout << value << " is in this container." << std::endl;
	else
	{
		std::cout << "No occurence founded for " << value << "." << std::endl;
		throw std::out_of_range("out of range");
	}
}

#endif