/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:36:12 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 11:17:26 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << std::endl << "Mode furtif enclenché. BOUM TCHAC TCHIC TCHAAAC" \
		<< std::endl;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src ) : ClapTrap( src )
{
	std::cout << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void			NinjaTrap::ninjaShoebox( NinjaTrap & target )
{
	std::cout << "N1NJ-TP: Oh! Un autre ninja!" << std::endl;
	std::cout << " Shoeboxing " << target._name << "." << std::endl;
}

void			NinjaTrap::ninjaShoebox( ClapTrap & target )
{
	std::cout << "N1NJ-TP: Une uniter ClapTrap " << std::endl;
	std::cout << " Shoeboxing " << target.getName() << "." << std::endl;
}

void			NinjaTrap::ninjaShoebox( FragTrap & target )
{
	std::cout << "N1NJ-TP: Que fais une uniter FragTrap ici ?" << std::endl;
	std::cout << " Shoeboxing " << target.getName() << "." << std::endl;
}

void			NinjaTrap::ninjaShoebox( ScavTrap & target )
{
	std::cout << "N1NJ-TP: Whaou une uniter ScavTrap " << std::endl;
	std::cout << " Shoeboxing " << target.getName() << "." << std::endl;
}

/* ************************************************************************** */
