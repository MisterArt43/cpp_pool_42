/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:20:26 by abucia            #+#    #+#             */
/*   Updated: 2023/06/05 05:26:40 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdlib.h>
#include <ctime>

bool check_date(std::string date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	if (atoi(date.substr(0, 4).c_str()) < 1970 || atoi(date.substr(0, 4).c_str()) > 2023)
		return (false);
	switch (atoi(date.substr(5, 2).c_str()))
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (atoi(date.substr(8, 2).c_str()) < 1 || atoi(date.substr(8, 2).c_str()) > 31)
			return (false);
		break;
	case 2:
		if (atoi(date.substr(8, 2).c_str()) < 1 || atoi(date.substr(8, 2).c_str()) > 28)
			return (false);
		break;
	case 4: case 6: case 9: case 11:
		if (atoi(date.substr(8, 2).c_str()) < 1 || atoi(date.substr(8, 2).c_str()) > 30)
			return (false);
		break;
	default:
		return (false);
		break;
	}
	//get current date
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	if (atoi(date.substr(0, 4).c_str()) > now->tm_year + 1900)
		return (false);
	else if (atoi(date.substr(0, 4).c_str()) == now->tm_year + 1900)
	{
		if (atoi(date.substr(5, 2).c_str()) > now->tm_mon + 1)
			return (false);
		else if (atoi(date.substr(5, 2).c_str()) == now->tm_mon + 1)
		{
			if (atoi(date.substr(8, 2).c_str()) > now->tm_mday)
				return (false);
		}
	}
	return (true);
}

bool compare_date(std::string date1, std::string date2)
{
	// std::cout << date1 << " " << date2 << std::endl;
	if (std::atoi(date1.substr(0, 4).c_str()) > std::atoi(date2.substr(0, 4).c_str()))
		return (true);
	else if (std::atoi(date1.substr(0, 4).c_str()) == std::atoi(date2.substr(0, 4).c_str()))
	{
		if (std::atoi(date1.substr(5, 2).c_str()) > std::atoi(date2.substr(5, 2).c_str()))
			return (true);
		else if (std::atoi(date1.substr(5, 2).c_str()) == std::atoi(date2.substr(5, 2).c_str()))
			if (atoi(date1.substr(8, 2).c_str()) > atoi(date2.substr(8, 2).c_str()))
				return (true);
	}
	return (false);
}


double get_nearest_date(std::map<std::string, double> file_contents, std::string date, double value)
{
	std::map<std::string, double>::iterator it = file_contents.begin();
	double nearest = 0;
	std::string nearest_date = it->first;
	while (it != file_contents.end())
	{
		if (it->first == date)
			return (it->second * value);
		else if (compare_date(it->first, date) && compare_date(date, nearest_date))
		{
			nearest = it->second;
			nearest_date = it->first;
		}
		it++;
	}
	return (nearest * value);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: no Arguments." << std::endl;
		return (1);
	}

	// attach an input stream to the wanted file
	std::ifstream input_stream;
	input_stream.open ("data.csv");

	// check stream status
	if (!input_stream)
	{
		std::cerr << "Error: could not open file.";
		return (1);
	}

	// file contents
	std::map<std::string, double> file_contents;

	// one line
	std::string line;

	// extract all the text from the input file
	getline(input_stream, line);
	while (getline(input_stream, line))
	{
		if (line.empty())
			continue;
		std::string date = line.substr(0, line.find(","));
		double value = strtod(line.substr(line.find(",") + 1, line.length()).c_str(), NULL);
		file_contents[date] = value;
	}

	// attach an input stream to the wanted file
	std::ifstream input_file;
	input_file.open (argv[1]);

	// check file status
	if (!input_file)
	{
		std::cerr << "Error: could not open file.";
		return (1);
	}

	// extract all the text from the input file
	getline(input_stream, line);
	while (getline(input_file, line))
	{
		if (line.empty())
			continue;
		// store each line in the vector
		if (line.find(" | ") == std::string::npos)
		{
			std::cout << "Error : invalid Date" << std::endl;
			continue;
		}
		std::string date = line.substr(0, line.find(" | "));
		if (!check_date(date))
		{
			std::cout << "Error : invalid Date" << std::endl;
			continue;
		}
		errno = 0;
		double value = strtod(line.substr(line.find(" | ") + 3, line.length()).c_str(), NULL);
		if (value < 0 || value > 1000 || errno != 0)
		{
			if (errno != 0)
			{
				std::cout << "Error: bad input => " << date << std::endl;
				continue;
			}
			else if (value < 0)
			{
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}
			else
			{
				std::cout << "Error: number too big." << std::endl;
				continue;
			}
		}
		std::cout << date << " => " << value << " = " << get_nearest_date(file_contents, date, value) << std::endl;
	}
}