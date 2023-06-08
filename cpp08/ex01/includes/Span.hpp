/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:07:33 by abucia            #+#    #+#             */
/*   Updated: 2023/05/18 08:07:33 by abucia           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class Span
{
private:
	size_t				_len;
	std::vector<int>	_span;
public:
	Span();
	Span(const Span& rhs);
	Span(const unsigned int n);
	~Span();

	Span&	operator=(const Span& rhs);

	void			addNumber(int n);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	unsigned int	size() const;


	template<class It>
	void	addNumber(It begin, It end)
	{
		if ((end - begin) + this->_span.size() <= this->_len)
		{
			//copy the range into the vector / back insert = add at the end
			std::copy(begin, end, std::back_inserter(this->_span));
			//sort the vector in ascending order
			std::sort(this->_span.begin(), this->_span.end());
			return ;
		}
		else if (this->_span.size() <= this->_len)
		{
			std::copy(begin, begin + (this->_len - this->_span.size()), std::back_inserter(this->_span));
			std::sort(this->_span.begin(), this->_span.end()); 
		}
		throw SpanOutOfRange();
	};

	class SpanOutOfRange: public std::exception
	{
		const char*	what() const throw()
		{
			return ("SpanOutOfRange");
		}
	};
	class SpanEmptySetException: public std::exception
	{
		const char*	what() const throw()
		{
			return ("SpanEmptySetException");
		}
	};
};


#endif