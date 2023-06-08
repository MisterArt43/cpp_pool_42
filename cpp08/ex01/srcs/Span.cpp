#include "../includes/Span.hpp"

Span::Span(): _len(0), _span(0) {}

Span::Span(const unsigned int n): _len(n), _span(0) {}

Span::Span(const Span& ref) { *this = ref; }

Span::~Span() {}



Span&	Span::operator=(const Span& rhs)
{
	this->_span = rhs._span;
	this->_len = rhs._len;
	return (*this);
}



void	Span::addNumber(const int n)
{
	if (this->_span.size() == this->_len)
		throw SpanOutOfRange();
	this->_span.push_back(n);
	std::sort(this->_span.begin(), this->_span.end());
}

unsigned int	Span::shortestSpan() const
{
	if (this->_span.size() <= 1)
		throw SpanEmptySetException();
	return (static_cast<unsigned int>(this->_span.back() - this->_span.front()));
}

unsigned int	Span::longestSpan() const
{
	if (this->_span.size() <= 1)
		throw SpanEmptySetException();
	unsigned int	min = this->_span[1] - this->_span[0];
	size_t			i = 2;
	while (i < this->_span.size())
	{
		if (static_cast<unsigned int>(this->_span[i] - this->_span[i - 1]) < min)
			min = static_cast<unsigned int>(this->_span[i] - this->_span[i - 1]);
		++i;
	}
	return (min);
}



unsigned int	Span::size() const
{
	return (this->_span.size());
}