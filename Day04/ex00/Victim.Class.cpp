/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:39:54 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 17:06:13 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "A random victim called " << _name \
		<< " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	std::cout << "A random victim called " << src._name \
		<< " just appeared!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "The victim " << _name << " died for no apparent reasons!" \
		<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
		this->_name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I am " << i.getName() << " and i like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string				Victim::getName( void ) const
{
	return _name;
}

void					Victim::setName( std::string name )
{
	this->_name = name;
}

void					Victim::getPolymorphed( void ) const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" \
		<< std::endl;
}

/* ************************************************************************** */
