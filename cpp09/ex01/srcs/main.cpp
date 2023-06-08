/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:20:26 by abucia            #+#    #+#             */
/*   Updated: 2023/06/08 22:12:51 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stack>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: no Arguments." << std::endl;
		return (1);
	}
	std::string operators = "+-*/";
	std::string valid_char = "0123456789+-*/ ";
	std::string str(argv[1]);
	std::stack<float> stack;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (valid_char.find(str[i]) == std::string::npos)
			return (std::cout << "Error: invalid character." << std::endl, 1);
		if (str[i] == ' ')
			continue;
		if (operators.find(str[i]) != std::string::npos)
		{
			if (stack.size() < 2)
				return (std::cout << "Error: not enough numbers." << std::endl, 1);
			float a = stack.top(); stack.pop();
			float b = stack.top(); stack.pop();
			if (str[i] == '+')
				stack.push(a + b);
			else if (str[i] == '-')
				stack.push(b - a);
			else if (str[i] == '*')
				stack.push(a * b);
			else if (str[i] == '/')
			{
				if (!a)
					return (std::cout << "Error: division by zero." << std::endl, EXIT_FAILURE);
				stack.push(b / a);
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			stack.push(str[i] - '0');
		}
		else
			return (std::cout << "Error: invalid character." << std::endl, 1);
	}
	if (stack.size() != 1)
		return (std::cout << "Error: too many numbers." << std::endl, 1);
	std::cout << stack.top() << std::endl;
}