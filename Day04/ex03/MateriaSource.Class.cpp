/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:49:01 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 11:38:18 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() :
	_inv{NULL, NULL, NULL, NULL}, _i(0)
{

}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _i; i++)
		delete _inv[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < rhs._i; i++)
			this->_inv[i] = rhs._inv[i]->clone();
		this->_i = rhs._i;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void						MateriaSource::learnMateria(AMateria * m)
{
	if (this->_i < 3)
	{
		this->_inv[this->_i] = m;
		this->_i += 1;
	}
}

AMateria *					MateriaSource::createMateria( std::string const & type )
{
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	return NULL;
}

/* ************************************************************************** */
