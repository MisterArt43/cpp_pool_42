#include "./Contact.hpp"

class PhoneBook
{
private:
	int		n;
	Contact	person[8];
public:
	void	add(Contact person);
	void	search();
	PhoneBook(void);
	~PhoneBook();
};

