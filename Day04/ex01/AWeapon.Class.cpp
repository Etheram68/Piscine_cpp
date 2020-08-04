/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:49:52 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:11:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) :
	_name(name), _damage(damage), _APCost(apcost)
{

}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_APCost = rhs.getAPCost();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const		AWeapon::getName( void ) const
{
	return _name;
}

int						AWeapon::getDamage( void ) const
{
	return _damage;
}

int						AWeapon::getAPCost( void ) const
{
	return _APCost;
}

/* ************************************************************************** */
