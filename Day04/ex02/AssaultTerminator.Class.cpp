/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.Class.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:08:28 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 16:12:15 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator() : ISpaceMarine()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src ) : ISpaceMarine(src)
{
	std::cout << "* teleports from space *" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void						AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void						AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void						AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}

ISpaceMarine *				AssaultTerminator::clone( void ) const
{
	return (new AssaultTerminator);
}

/* ************************************************************************** */
