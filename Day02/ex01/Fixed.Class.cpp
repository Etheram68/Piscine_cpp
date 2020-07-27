/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 10:45:59 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/27 12:55:15 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.Class.hpp"

int const			Fixed::_nbrBits = 8;

Fixed::Fixed() : _nbrFixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const nbr ) : _nbrFixed(nbr << Fixed::_nbrBits)
{
	std::cout << "Constructor called with params Int" << std::endl;
}

Fixed::Fixed( float const nbr ) : _nbrFixed(roundf(nbr * (1 << Fixed::_nbrBits)))
{
	std::cout << "Constructor called with params Float" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->_nbrFixed = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

int					Fixed::getRawBits( void ) const
{
	return this->_nbrFixed;
}

void				Fixed::setRawBits( int const raw )
{
	this->_nbrFixed = raw;
}

float				Fixed::toFloat( void ) const
{
	return this->_nbrFixed / (float)(1 << Fixed::_nbrBits);
}

int					Fixed::toInt( void ) const
{
	return this->_nbrFixed >> Fixed::_nbrBits;
}

/* ************************************************************************** */
