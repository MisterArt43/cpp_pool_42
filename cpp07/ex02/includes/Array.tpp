#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array(void) : _size(0), _array(new T[0]) {}
	Array(unsigned int n) : _size(n), _array(new T[n]) {}

	~Array(void) { delete[] _array; }
	Array(const Array &other)
	{
		_array = new T[other._size];
		_size = other._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			delete[] _array;
			_array = new T[other._size];
			_size = other._size;
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i) const
	{
		if (i >= _size)
			throw OutOfBoundsException();
		return _array[i];
	}

	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Index is out of bounds"; }
	};

	unsigned int size(void) const { return _size; }
};

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr)
{
	for (unsigned int i(0); i < arr.size(); i++)
		out << arr[i] << " ";
	return out;
}

#endif