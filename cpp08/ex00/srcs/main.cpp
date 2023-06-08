/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:37:38 by abucia            #+#    #+#             */
/*   Updated: 2023/05/18 07:37:38 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "../includes/easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		easyfind(vec, 2);
		easyfind(vec, 99);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::deque<int> deque;
		for (int i = 0; i < 5; i++)
			deque.push_back(i);
		easyfind(deque, 3);
		easyfind(deque, 99);
	}
	catch (const std::exception &e) {}

	try
	{
		std::list<int> lst;
		for (int i = 0; i < 5; i++)
			lst.push_back(i + 42);
		easyfind(lst, 42);
		easyfind(lst, 99);
	}
	catch (const std::exception &e) {}

	try
	{
		std::set<int> set;
		for (int i = 0; i < 5; i++)
			if (!set.insert(42 + i).second)
				std::cout << "failed to insert " << 42 + i << " in set !" << std::endl;
		easyfind(set, 42);
		easyfind(set, 99);
	}
	catch (const std::exception &e) {}

	try
	{
		std::multiset<int> multiset;
		for (int i = 0; i < 5; i++)
			multiset.insert(42 + i);
		easyfind(multiset, 42);
		easyfind(multiset, 99);
	}
	catch (const std::exception &e) {}

	return 0;
}