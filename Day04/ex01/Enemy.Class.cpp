/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:30:04 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:20:47 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy( int hp, std::string const & type ) :
	_type(type), _hp(hp)
{

}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	Enemy::getType( void ) const
{
	return _type;
}

int					Enemy::getHP( void ) const
{
	return _hp;
}

void				Enemy::takeDamage( int damage)
{
	if (damage > 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}

/* ************************************************************************** */
