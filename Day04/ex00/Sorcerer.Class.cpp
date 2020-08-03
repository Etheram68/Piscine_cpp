/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:20:13 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 17:06:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer( std::string name, std::string title ) :
	_name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	std::cout << src._name << ", " << src._title << ", is born!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead." \
		<< " Consequences wil never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and i like ponies!" \
		<< std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string				Sorcerer::getName( void ) const
{
	return this->_name;
}

void					Sorcerer::setName( std::string name )
{
	this->_name = name;
}

std::string				Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void					Sorcerer::setTitle( std::string name )
{
	this->_title = name;
}

void					Sorcerer::polymorph( Victim const & target ) const
{
	target.getPolymorphed();
}

/* ************************************************************************** */
