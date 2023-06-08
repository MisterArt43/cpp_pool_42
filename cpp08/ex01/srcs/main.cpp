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

#include "../includes/Span.hpp"
#include <vector>
#define TEST 5000

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(-111);
		std::cout << "size : " << sp.size() << std::endl; 
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		Span	span2(TEST);
		/* Span	span2(500); */
		std::cout << "size : " << span2.size() << std::endl; 
		for (size_t i = 0; i < TEST; i++)
		{
			span2.addNumber(3);
		}
		std::cout << "size : " << span2.size() << std::endl; 
		try
		{
			span2.addNumber(3);
		}
		catch(const std::exception& e)
		{
			std::cerr << "error : " << e.what() << '\n';
		}
		std::cout << "size : " << span2.size() << std::endl; 

		Span	span3;
		try
		{
			span3.addNumber(3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "addNumber 5x add -- add (5000) == 5000 add" << std::endl;
		Span span = Span(50000);
		std::vector<int> range(5000, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		span.addNumber(5);
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	{
		std::cout << "addNumber 5x add -- add (50) == Exception 0 add" << std::endl;
		Span span = Span(5);
		std::vector<int> range(50, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		span.addNumber(5);
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	{
		std::cout << "addNumber 2x add -- add (50) == Exception 48 add" << std::endl;
		Span span = Span(50);
		std::vector<int> range(50, 10);
		range[48] = 40;
		span.addNumber(5);
		span.addNumber(2);
		try
		{
			span.addNumber(range.begin(), range.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.size() << std::endl << std::endl;
	}
	return 0;
}