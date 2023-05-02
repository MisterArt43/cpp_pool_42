#include <iostream>
#include "../includes/whatever.hpp"

int main(void)
{
	{
		int first = 42;
		int second = 21;

		std::cout << "Max of " << first << " and " << second << " is " << ::max(first, second) << std::endl;
		std::cout << "Min of " << first << " and " << second << " is " << ::min(first, second) << std::endl;
	}
	{
		double first = 42;
		double second = 21;

		std::cout << "Max of " << first << " and " << second << " is " << ::max(first, second) << std::endl;
		std::cout << "Min of " << first << " and " << second << " is " << ::min(first, second) << std::endl;
	}
	{
		float first = 42;
		float second = 21;

		std::cout << "Max of " << first << " and " << second << " is " << ::max(first, second) << std::endl;
		std::cout << "Min of " << first << " and " << second << " is " << ::min(first, second) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		return 0;
	}
}