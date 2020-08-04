/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:41:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:46:21 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src ) : Enemy(src)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void						SuperMutant::takeDamage( int damage)
{
	damage -= 3;
	if (damage > 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}

/* ************************************************************************** */
