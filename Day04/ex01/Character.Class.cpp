/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:50:01 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:33:18 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( std::string const & name ) :
	_name(name), _ap(40), _weapon(NULL)
{

}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_ap = rhs._ap;
		this->_weapon = rhs._weapon;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << i.getName() << " has " << i.getAp() << " and ";
	if (i.hasWeapon())
		o << "carries a " << i.getWeapon();
	else
		o << "is unarmed";
	o << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const		Character::getName( void ) const
{
	return this->_name;
}

std::string const		Character::getWeapon( void ) const
{
	return this->_weapon->getName();
}

int						Character::getAp( void ) const
{
	return _ap;
}

bool					Character::hasWeapon( void ) const
{
	if (_weapon)
		return true;
	return false;
}

void					Character::recoverAP( void )
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void					Character::equip( AWeapon * weapon )
{
	_weapon = weapon;
}

void					Character::attack( Enemy * target )
{
	if (_weapon && _ap > 0)
	{
		if (_ap >= _weapon->getAPCost())
		{
			std::cout << _name << " attaque " << target->getType() \
				<< " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			target->takeDamage(_weapon->getDamage());
			if (target->getHP() <= 0)
				delete target;
			_ap -= _weapon->getAPCost();
		}
		else
			std::cout << "* Not enough AP *" << std::endl;
	}
}

/* ************************************************************************** */
