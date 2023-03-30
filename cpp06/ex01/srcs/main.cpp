#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <stdint.h>

typedef struct s_data
{
	int		a;
	bool	b;
	char	c;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main(void)
{
	Data a;
	Data* cp;

	a.a = 25;
	a.b = true;
	a.c = 'a';

	cp = deserialize(serialize(&a));
	std::cout << 
	"a : " << cp->a << 
	"\nb : " << cp->b << 
	"\nc : " << cp ->c << 
	std::endl;
	return 0;
}