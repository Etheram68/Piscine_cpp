/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:51:29 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 17:03:26 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim( src )
{
	std::cout << "Zog zog." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Peon::getPolymorphed( void ) const
{
	std::cout << this->getName() << " was just polymorphed into a pink pony!" \
		<< std::endl;
}

/* ************************************************************************** */
