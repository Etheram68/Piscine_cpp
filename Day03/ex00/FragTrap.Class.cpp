/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:07:38 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 13:04:18 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( std::string name)
	: _name(name), _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
		_level(1), _meleeAtkDmg(30), _rangedAtkDmg(20), _ArmorDmgReduc(5)
{
	std::cout << "Séquence d'initiation terminée." \
		<< " Bonjour, je suis votre nouveau robot multifonction " \
		<< name << "." << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "OK. Merci de m'avoir donné une deuxième chance Dieu." \
		<< " C'est vraiment trop sympa." << std::endl;
	*this = src;
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "Vie: " << i.getNbHit() << std::endl \
		<< "Energie: " << i.getNbEnergy() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int						FragTrap::getNbHit( void ) const
{
	return _hit;
}

void						FragTrap::setNbHit( int value )
{
	std::cout << "FR4G-TP: " << _name << " a trouver " << value << " de vie. ";
	_hit += value;
	if (_hit > _maxHit)
		_hit = _maxHit;
	std::cout << "La vie est maintenant a " << _hit << "." << std::endl;
}

int						FragTrap::getNbEnergy( void ) const
{
	return _energy;
}

void						FragTrap::setNbEnergy( int value )
{
	std::cout << "FR4G-TP: " << _name << " a trouver " << value << " d'energie. ";
	_energy += value;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
	std::cout << "Energie est maintenant a " << _energy << "." << std::endl;
}

void					FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  à distance" \
		<< ", causant " << _rangedAtkDmg << " points de dégâts!" << std::endl;
}

void					FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  au corps-à-corps" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
}

void					FragTrap::wordAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  avec ces mots" \
		<< ", causant " << 1 << " points de dégâts!" << std::endl;
	std::cout << std::endl << "mode furtif enclenché. BOUM TCHAC TCHIC TCHAAAC" \
		<< std::endl << std::endl;
}

void					FragTrap::turretAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " attaque " << target << "  avec une tourelle" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
}

void					FragTrap::carnageAttack( std::string const & target )
{
	std::cout << "FR4G-TP: " << _name << " entre en furie contre " << target \
		<< ", causant " << 50 << " points de dégâts!" << std::endl;
}

void					FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "FR4G-TP: " << _name << " a pris " << amount \
		<< " points de dégâts, l'armure en a abosrber " << _ArmorDmgReduc << std::endl;
	if ( (int)amount > _ArmorDmgReduc)
		_hit -= (amount - _ArmorDmgReduc);
	if (_hit < 0)
		_hit = 0;
}

void					FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "FR4G-TP: " << _name << " a reparer " << amount \
		<< " points de dégâts!" << std::endl;
	_hit += amount;
	if (_hit > _maxHit)
		_hit = _maxHit;
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
