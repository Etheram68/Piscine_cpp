/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:07:38 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 15:17:19 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "Séquence d'initiation terminée." \
		<< " Bonjour, je suis votre nouveau robot multifonction " \
		<< name << "." << std::endl << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap( src )
{
	std::cout << "OK. Merci de m'avoir donné une deuxième chance Dieu." \
		<< " C'est vraiment trop sympa." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Vous êtes Dieu ?" \
		<< " Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void					FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "CL4P-TP: " << _name << " attaque " << target << "  à distance" \
		<< ", causant " << _rangedAtkDmg << " points de dégâts!" << std::endl;
}

void					FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "CL4P-TP: " << _name << " attaque " << target << "  au corps-à-corps" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
}

void					FragTrap::wordAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  avec ces mots" \
		<< ", causant " << 1 << " points de dégâts!" << std::endl;
}

void					FragTrap::turretAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  avec une tourelle" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
	std::cout << std::endl << "Bon je crois que c'est le moment de sortir une" \
		" réplique culte... AUTO-LOOOOOOOOCCCCCC !!!!" \
		<< std::endl << std::endl;
}

void					FragTrap::carnageAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " entre en furie contre " << target \
		<< ", causant " << 50 << " points de dégâts!" << std::endl;
}

void					FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	void		(FragTrap::*ptr[])( std::string const & ) =
	{
		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack,
		&FragTrap::wordAttack,
		&FragTrap::turretAttack,
		&FragTrap::carnageAttack
	};
	if (_energy >= 25)
	{
		(this->*ptr[rand() % 5])(target);
		this->_energy -= 25;
		if (this->_energy < 0)
				this->_energy = 0;
	}
	else
		std::cout << "FR4G-TP: " << _name << " n'a plus d'energy, il ne peut plus attaquer!" \
			<< std:: endl;
}

/* ************************************************************************** */
