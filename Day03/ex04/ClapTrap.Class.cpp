/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:30:04 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 15:18:32 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "New Constructor Type CL4P-TP" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hit, int maxHit, int energy, int maxEnergy,\
		int level, int meleeAtkDmg, int rangedAtkDmg, int ArmorAtkReduc ) :
		_name(name), _hit(hit), _maxHit(maxHit), _energy(energy),
		_maxEnergy(maxEnergy), _level(level), _meleeAtkDmg(meleeAtkDmg),
		_rangedAtkDmg(rangedAtkDmg), _ArmorDmgReduc(ArmorAtkReduc)
{
	std::cout << "New Constructor Type CL4P-TP" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor CL4P-TP" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Unite Type CL4P-TP" << std::endl << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


std::ostream &		operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "Vie: " << i.getNbHit() << std::endl \
		<< "Energie: " << i.getNbEnergy() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int					ClapTrap::getNbHit( void ) const
{
	return _hit;
}

void				ClapTrap::setNbHit( int value )
{
	std::cout << "CL4P-TP: " << _name << " a trouver " << value << " de vie. ";
	_hit += value;
	if (_hit > _maxHit)
		_hit = _maxHit;
	std::cout << "La vie est maintenant a " << _hit << "." << std::endl;
}

int					ClapTrap::getNbEnergy( void ) const
{
	return _energy;
}

void				ClapTrap::setNbEnergy( int value )
{
	std::cout << "CL4P-TP: " << _name << " a trouver " << value << " d'energie. ";
	_energy += value;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
	std::cout << "Energie est maintenant a " << _energy << "." << std::endl;
}

std::string				ClapTrap::getName( void ) const
{
	return _name;
}

void				ClapTrap::rangedAttack( std::string const & target )
{
	std::cout << "CL4P-TP: " << _name << " attaque " << target << "  à distance" \
		<< ", causant " << _rangedAtkDmg << " points de dégâts!" << std::endl;
}

void				ClapTrap::meleeAttack( std::string const & target )
{
	std::cout << "CL4P-TP: " << _name << " attaque " << target << "  au corps-à-corps" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
}

void				ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "CL4P-TP: " << _name << " a pris " << amount \
		<< " points de dégâts, l'armure en a abosrber " << _ArmorDmgReduc << std::endl;
	if ( (int)amount > _ArmorDmgReduc)
		_hit -= (amount - _ArmorDmgReduc);
	if (_hit < 0)
		_hit = 0;
}

void				ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "CL4P-TP: " << _name << " a reparer " << amount \
		<< " points de dégâts!" << std::endl;
	_hit += amount;
	if (_hit > _maxHit)
		_hit = _maxHit;
}

/* ************************************************************************** */
