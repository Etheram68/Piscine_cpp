/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:02:50 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 15:56:09 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( std::string name)
	: _name(name), _hit(100), _maxHit(100), _energy(50), _maxEnergy(50),
		_level(1), _meleeAtkDmg(20), _rangedAtkDmg(15), _ArmorDmgReduc(3)
{
	std::cout << "Claptrap - démarrer la séquence de démarrage" << std::endl \
		<< "Directive 1: Protégez l'humanité!" \
		<< " Deuxième directive: obéissez à Jack à tout prix." \
		<< " Directive trois: Danse!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "Claptrap - démarrer la séquence de démarrage" << std::endl \
		<< "1ère règle : Jack est votre ami " \
		<< " 2ème règle : les Paysans sont diaboliques" \
		<< " 3ème règle : vous êtes remplaçable" << std::endl;
	*this = src;
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

std::ostream &		operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "Vie: " << i.getNbHit() << std::endl \
		<< "Energie: " << i.getNbEnergy() << std::endl;
	return o;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int					ScavTrap::getNbHit( void ) const
{
	return _hit;
}

void				ScavTrap::setNbHit( int value )
{
	std::cout << "Cl4ptr4p: " << _name << " a trouver " << value << " de vie. ";
	_hit += value;
	if (_hit > _maxHit)
		_hit = _maxHit;
	std::cout << "La vie est maintenant a " << _hit << "." << std::endl;
}

int					ScavTrap::getNbEnergy( void ) const
{
	return _energy;
}

void				ScavTrap::setNbEnergy( int value )
{
	std::cout << "Cl4ptr4p: " << _name << " a trouver " << value << " d'energie. ";
	_energy += value;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
	std::cout << "Energie est maintenant a " << _energy << "." << std::endl;
}

void				ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << "Cl4ptr4p: " << _name << " attaque " << target << "  à distance" \
		<< ", causant " << _rangedAtkDmg << " points de dégâts!" << std::endl;
}

void				ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << "Cl4ptr4p: " << _name << " attaque " << target << "  au corps-à-corps" \
		<< ", causant " << _meleeAtkDmg << " points de dégâts!" << std::endl;
}

void				ScavTrap::takeDamage( unsigned int amount )
{
	std::cout << "Cl4ptr4p: " << _name << " a pris " << amount \
		<< " points de dégâts, l'armure en a abosrber " << _ArmorDmgReduc << std::endl;
	if ( (int)amount > _ArmorDmgReduc)
		_hit -= (amount - _ArmorDmgReduc);
	if (_hit < 0)
		_hit = 0;
}

void				ScavTrap::beRepaired( unsigned int amount )
{
	std::cout << "Cl4ptr4p: " << _name << " a reparer " << amount \
		<< " points de dégâts!" << std::endl;
	_hit += amount;
	if (_hit > _maxHit)
		_hit = _maxHit;
}

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
