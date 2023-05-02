#include "../includes/Array.tpp"

#define SIZE 10
#define separator std::cout << "#############################" << std::endl

int main(void)
{
	separator;

	Array<float> test;

	std::cout << "init Array 1 with size of : " << SIZE << std::endl;
	std::cout << "init Array 2 with size of : " << (SIZE - 5) << std::endl;

	Array<float> test2;
	test2;
	Array<int> intArray(SIZE);
	Array<int> intArray2(SIZE - 5);
	Array<int> intArray3(SIZE);

	Array<int> * a = new Array<int>(); 
	std::cout << *a << std::endl;

	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i * 2;

	std::cout << "Int Array 1: " << intArray << std::endl;

	intArray2 = intArray;
	intArray3 = intArray2;

	std::cout << "int Array 2: " << intArray2 << std::endl;
	std::cout << "int Array 3: " << intArray3 << std::endl;

	try
	{
		std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
		std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
	}
	catch (Array<int>::OutOfBoundsException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	delete a;
	separator;
	return (0);
}