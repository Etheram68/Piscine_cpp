/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:29:46 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:22:32 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure( const Cure & src ) : AMateria(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		Cure::setXP(rhs.getXP());
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *			Cure::clone( void ) const
{
	return new Cure();
}

void				Cure::use( ICharacter & target )
{
	Cure::setXP(Cure::getXP() + 10);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
/* ************************************************************************** */
