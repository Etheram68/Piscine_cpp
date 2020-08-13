/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:48:51 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 15:57:16 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <algorithm>
#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( unsigned int const n) : _n(n)
{
	_tab.reserve(n);
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_tab = rhs._tab;
		this->_n = rhs._n;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber( int n )
{
	if (this->_tab.size() == this->_n)
		throw std::length_error("Out of size");
	this->_tab.push_back(n);
}

int				Span::longestSpan( void )
{
	return (*std::max_element(this->_tab.begin(), this->_tab.end())) - \
		(*std::min_element(this->_tab.begin(), this->_tab.end()));
}

int				Span::shortestSpan( void )
{
	int		minDiff;
	std::vector<int>	cpy(_tab);
	std::sort(cpy.begin(), cpy.end());
	std::vector<int>::iterator it = cpy.begin() + 1;

	for (; it != cpy.end(); it++)
	{
		if (*it - *(it - 1) < minDiff)
			minDiff = *it - *(it - 1);
	}
	return minDiff;
}

/* ************************************************************************** */
