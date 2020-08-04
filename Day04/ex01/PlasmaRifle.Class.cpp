/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:04:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:25:13 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) : AWeapon(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
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

void						PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* ************************************************************************** */
