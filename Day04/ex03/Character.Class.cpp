/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:05:31 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:15:00 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( std::string const & name ) :
	_inv{ NULL, NULL, NULL, NULL }, _name(name), _i(0)
{

}

Character::Character( const Character & src ) :
	_inv{ NULL, NULL, NULL, NULL }, _name(src._name), _i(0)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < _i; i++)
		delete this->_inv[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &					Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		for (int i = 0; i < rhs._i; i++)
			this->_inv[i] = rhs._inv[i]->clone();
		this->_i = rhs._i;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &			Character::getName( void ) const
{
	return _name;
}

void						Character::equip( AMateria * m )
{
	if (this->_i < 3)
	{
		this->_inv[this->_i] = m;
		this->_i += 1;
	}
}

void						Character::unequip( int idx )
{
	if (idx >= 0 && idx <= 3)
		this->_inv[idx] = NULL;
}

void						Character::use( int idx, ICharacter & target )
{
	if (idx < this->_i)
		this->_inv[idx]->use(target);
}

/* ************************************************************************** */
