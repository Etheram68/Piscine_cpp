/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:47:07 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:49:07 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src ) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
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


/* ************************************************************************** */
