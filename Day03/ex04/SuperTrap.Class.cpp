/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 15:04:18 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 15:11:30 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap( std::string name ) :
	ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5),
	FragTrap(name), NinjaTrap(name)
{
	std::cout << "Default constructor called" << std::endl;
}

SuperTrap::SuperTrap( const SuperTrap & src ) :
	FragTrap(src), NinjaTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/


/* ************************************************************************** */
