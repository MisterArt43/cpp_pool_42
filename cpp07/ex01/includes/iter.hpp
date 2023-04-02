#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

// The iter function takes an array and its length, and applies the given function to each element of the array.
template <typename T>
void iter(T *array, size_t length, void (*function)(const T&))
{
    for (size_t i = 0; i < length; ++i)
    {
        function(array[i]);
    }
}

template <typename T>
void print(T val)
{
        std::cout << "value is : " << val << "."  << std::endl;
}

#endif

