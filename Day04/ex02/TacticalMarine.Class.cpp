/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.Class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:30:42 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 15:44:02 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine() : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src ) : ISpaceMarine(src)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

void						TacticalMarine::battleCry( void ) const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}

void						TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void						TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine *				TacticalMarine::clone( void ) const
{
	return (new TacticalMarine);
}

/* ************************************************************************** */
