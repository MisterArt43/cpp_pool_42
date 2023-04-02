#include <iostream>
#include "../includes/iter.hpp"

// A function that takes an integer as argument and prints its double.

int main()
{
        int i_array[] = {1, 2, 3, 4, 5};
        size_t i_length = sizeof(i_array) / sizeof(int);
        char c_array[] = {'a', 'b', 'c'};
        size_t c_length = sizeof(c_array) / sizeof(char);

        // Applying the print_double function to the array elements using iter.
        std::cout << "Printing doubles of the array elements: " << std::endl;
        iter(i_array, i_length, print);

        std::cout << "Printing chars of the array elements: " << std::endl;
        iter(c_array, c_length, print);
        return 0;
}

