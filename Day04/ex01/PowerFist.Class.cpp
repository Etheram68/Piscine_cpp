/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:26:10 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:25:22 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist( const PowerFist & src ) : AWeapon(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs )
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

void					PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}

/* ************************************************************************** */
