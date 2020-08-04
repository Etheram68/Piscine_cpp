/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:18:17 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 17:00:55 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : _count(0), _squad(NULL)
{

}

Squad::Squad( const Squad & src )
{
	for (int i = 0; i < src.getCount(); i++)
		push(src.getUnit(i));
	_count = src._count;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	t_container		*tmp;

	if (_squad)
	{
		while (_squad)
		{
			delete _squad->unit;
			tmp = _squad;
			_squad = _squad->next;
			delete tmp;
		}
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

int						Squad::push( ISpaceMarine * marine )
{
	t_container		*tmp;

	tmp = this->_squad;
	if ( marine && !_isIn(marine, tmp))
	{
		tmp = this->_squad;
		if (this->_squad)
		{
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new t_container;
			tmp->next->unit = marine;
			tmp->next->next = NULL;
		}
		else
		{
			_squad = new t_container;
			_squad->unit = marine;
			_squad->next = NULL;
		}
		_count += 1;
	}
	return this->_count;
}

ISpaceMarine *			Squad::getUnit( int nb ) const
{
	t_container		*tmp;

	tmp = this->_squad;
	if (nb < 0 || nb >= this->_count)
		return NULL;
	while (nb--)
		tmp = tmp->next;
	return tmp->unit;
}

int						Squad::getCount( void ) const
{
	return this->_count;
}

bool					Squad::_isIn( ISpaceMarine *marine, t_container *squad )
{
	if (!squad)
		return false;
	while (squad)
	{
		if (squad->unit == marine)
			return true;
		squad = squad->next;
	}
	return false;
}

/* ************************************************************************** */
