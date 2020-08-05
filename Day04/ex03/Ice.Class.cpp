/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:29:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:22:21 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice( const Ice & src ) : AMateria(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		Ice::setXP(rhs.getXP());
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *			Ice::clone( void ) const
{
	return new Ice();
}

void				Ice::use( ICharacter & target )
{
	Ice::setXP(Ice::getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */
