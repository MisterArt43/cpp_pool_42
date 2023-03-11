#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
private:
	std::string _Ideas[100];
public:
	Brain& operator=(const Brain&);
	Brain(const Brain&);

	void	displayIdea(size_t);
	void	setIdea(int, std::string);
	const std::string&	getIdea(int) const;
	Brain();
	~Brain();
};

#endif