/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:49:03 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 16:00:26 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Converter.hpp"
#include "errno.h"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter( std::string const &str ) : _str(str), _char(false)
{
}

Converter::Converter( const Converter & src ) : _str(src._str), _char(src._char)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converter &				Converter::operator=( Converter const & rhs )
{
	if ( this != &rhs )
	{
		this->_str = rhs._str;
		this->_char = rhs._char;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Converter::operator		char( void ) const
{
	char tmp(0);

	if (this->_str.size() == 1 && isascii(this->_str[0]) && !isdigit(this->_str[0]))
	{
		tmp = this->_str[0];
		this->_char = true;
	}
	else
	{
		tmp = static_cast<char>(std::atoi(this->_str.c_str()));
		if (errno)
			throw NoConversionException();
	}
	return tmp;
}

Converter::operator 	int( void ) const
{
	int tmp(0);

	if (_char)
		tmp = static_cast<int>(this->_str[0]);
	else
	{
		tmp = std::atoi(this->_str.c_str());
		if (errno)
			throw NoConversionException();
	}
	return tmp;
}

Converter::operator 	float( void ) const
{
	float tmp(0.0f);

	if (_char)
		tmp = static_cast<float>(this->_str[0]);
	else
	{
		tmp = std::strtof(this->_str.c_str(), NULL);
		if (errno)
			throw NoConversionException();
	}
	return tmp;
}

Converter::operator 	double( void ) const
{
	double tmp(0.0);

	if (_char)
	{
		tmp = static_cast<double>(this->_str[0]);
	}
	else
	{
		tmp = std::strtod(this->_str.c_str(), NULL);
		if (errno)
			throw NoConversionException();
	}
	return tmp;
}

Converter::NoConversionException::NoConversionException() {};

Converter::NoConversionException::~NoConversionException() throw() {};

char const *			Converter::NoConversionException::what( void ) const throw()
{
	return "No conversion";
}

/* ************************************************************************** */
