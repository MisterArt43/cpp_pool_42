#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <stdint.h>

class Base
{
private:
	
public:
	virtual ~Base();
};

Base::~Base()
{
}

class A : public Base
{
private:
	
public:
	A();
	~A();
};

A::A()
{
}

A::~A()
{
}
class B : public Base
{
private:
	
public:
	B();
	~B();
};

B::B()
{
}

B::~B()
{
}
class C : public Base
{
private:
	
public:
	C();
	~C();
};

C::C()
{
}

C::~C()
{
}

Base* generate(void)
{
	int n = rand()%3;
	if (n == 0)
		return new A();
	else if (n == 1)
		return new B();
	return new C();
}

void identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "It's a class A !!!" << std::endl;
	if (dynamic_cast<B*>(ptr))
		std::cout << "It's a class B !!!" << std::endl;
	if (dynamic_cast<C*>(ptr))
		std::cout << "It's a class C !!!" << std::endl;
}

void identify(Base& ref)
{
	try
	{
		if (& dynamic_cast<A&>(ref))
			std::cout << "It's a class A !!!" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		if (& dynamic_cast<B&>(ref))
			std::cout << "It's a class B !!!" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		if (& dynamic_cast<C&>(ref))
			std::cout << "It's a class C !!!" << std::endl;
	}
	catch(const std::exception& e){}
	
}

void	test()
{
	Base*	ptr = generate();
	Base&	ref = *ptr;
	std::cout << "identification by pointer" << std::endl;
	identify(ptr);
	std::cout << "identification by reference" << std::endl;
	identify(ref);
	std::cout << std::endl;
	delete ptr;
}

int main(void)
{
	std::srand(time(NULL));
	for (size_t i = 0; i < 15; i++)
		test();
	return 0;
}