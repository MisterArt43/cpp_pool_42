/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 00:20:26 by abucia            #+#    #+#             */
/*   Updated: 2023/06/08 22:01:39 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <errno.h>
#include <stdint.h>
#include <vector>
#include <deque>
#include <ctime>


void sort_vector(std::vector<unsigned int> &vec)
{
	if (vec.size() <= 21)
	{
		for (size_t i = 0; i < vec.size(); i++)
		{
			size_t j = i;
			while (j > 0 && vec[j - 1] > vec[j])
			{
				unsigned int tmp = vec[j];
				vec[j] = vec[j - 1];
				vec[j - 1] = tmp;
				j--;
			}
		}
		return ;
	}
	std::vector<unsigned int> left;
	std::vector<unsigned int> right;
	for (size_t i = 0; i < vec.size() >> 1; i++)
		left.push_back(vec[i]);
	for (size_t i = vec.size() >> 1; i < vec.size(); i++)
		right.push_back(vec[i]);
	sort_vector(left);
	sort_vector(right);
	vec.clear();
	while (left.size() && right.size())
	{
		if (left[0] < right[0])
		{
			vec.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			vec.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	while (left.size())
	{
		vec.push_back(left[0]);
		left.erase(left.begin());
	}
	while (right.size())
	{
		vec.push_back(right[0]);
		right.erase(right.begin());
	}
}

void sort_deque(std::deque<unsigned int> &deq)
{
	if (deq.size() <= 21)
	{
		for (size_t i = 0; i < deq.size(); i++)
		{
			size_t j = i;
			while (j > 0 && deq[j - 1] > deq[j])
			{
				unsigned int tmp = deq[j];
				deq[j] = deq[j - 1];
				deq[j - 1] = tmp;
				j--;
			}
		}
		return ;
	}
	std::deque<unsigned int> left;
	std::deque<unsigned int> right;
	for (size_t i = 0; i < deq.size() >> 1; i++)
		left.push_back(deq[i]);
	for (size_t i = deq.size() >> 1; i < deq.size(); i++)
		right.push_back(deq[i]);
	sort_deque(left);
	sort_deque(right);
	deq.clear();
	while (left.size() && right.size())
	{
		if (left[0] < right[0])
		{
			deq.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			deq.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	while (left.size())
	{
		deq.push_back(left[0]);
		left.erase(left.begin());
	}
	while (right.size())
	{
		deq.push_back(right[0]);
		right.erase(right.begin());
	}
}


int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "Error: no Arguments." << std::endl, 1);

	std::vector<unsigned int> vec;
	std::deque<unsigned int> deq;

	errno = 0;
	for (int i = 1; i < argc; i++)
	{
		double val = std::strtod(argv[i], NULL);
		if (errno || val < 0 || val > UINT32_MAX || val - (uint32_t)val)
			return (std::cout << "Error: invalid inpute" << std::endl, 1);
		vec.push_back((uint32_t)val);
		deq.push_back((uint32_t)val);
	}
	std::cout << "Before: " << std::endl;
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	std::clock_t start_vec = std::clock();
	sort_vector(vec);
	std::clock_t end_vec = std::clock();
	std::clock_t start_deq = std::clock();
	sort_deque(deq);
	std::clock_t end_deq = std::clock();

	std::cout << "After: " << std::endl;
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";

	std::cout << std::endl;
	std::cout << "time to process a range of " << vec.size() << " elements with std::vector : " << ((double) (end_vec - start_vec)) / CLOCKS_PER_SEC << " seconds" << std::endl;
	std::cout << "time to process a range of " << deq.size() << " elements with std::deque : " << ((double) (end_deq - start_deq)) / CLOCKS_PER_SEC << " seconds" << std::endl;
}