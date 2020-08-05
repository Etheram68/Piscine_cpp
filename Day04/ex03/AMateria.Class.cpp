/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:20:31 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 10:36:48 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria( std::string const & type ) :
	_xp(0), _type(type)
{

}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &					AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_xp = rhs._xp;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &			AMateria::getType( void ) const
{
	return _type;
}

void						AMateria::setType( std::string const & type )
{
	_type = type;
}

unsigned int				AMateria::getXP( void ) const
{
	return _xp;
}

void						AMateria::setXP( unsigned int xp )
{
	_xp = xp;
}

/* ************************************************************************** */
