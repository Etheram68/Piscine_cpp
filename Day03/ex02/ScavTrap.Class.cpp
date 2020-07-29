/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:02:50 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 17:17:08 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( std::string name) : ClapTrap(name, 50, 50, 20, 15, 3)
{
	std::cout << "Claptrap - démarrer la séquence de démarrage" << std::endl \
		<< "Directive 1: Protégez l'humanité!" \
		<< " Deuxième directive: obéissez à Jack à tout prix." \
		<< " Directive trois: Danse!" << std::endl << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap( src )
{
	std::cout << "Claptrap - démarrer la séquence de démarrage" << std::endl \
		<< "1ère règle : Jack est votre ami " \
		<< " 2ème règle : les Paysans sont diaboliques" \
		<< " 3ème règle : vous êtes remplaçable" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Mais ils avaient une vie, une famille c'est horrible !" \
	" ... Nan Je déconne, on s'en fout !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void				ScavTrap::challengeNewcomer()
{
	std::string		defi[] =
	{
		"Tape m'en cinq !",
		"Bonjour, nouveau venu! Trouvez-moi un citron, et cette porte sera à vous.",
		"Raconte-moi une blague, et j'envisagerai peut-être d'ouvrir. Attendez, c'est une bonne blague!",
		"Le gâteau est-il un mensonge?"
	};
	std::cout << defi[rand() % 4] << std::endl;
}

/* ************************************************************************** */
