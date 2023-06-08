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

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

private:
public:
	MutantStack(void){};
	~MutantStack(void){};

	MutantStack(const MutantStack &rhs) { *this = rhs; }
	MutantStack &operator=(const MutantStack &rhs)
	{
		std::stack<T, Container>::operator=(rhs);
		return *this;
	}

	typedef typename Container::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif