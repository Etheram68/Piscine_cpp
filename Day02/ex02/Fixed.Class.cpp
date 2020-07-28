/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 10:45:59 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/28 10:04:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.Class.hpp"

int const			Fixed::_nbrBits = 8;

Fixed &				Fixed::min( Fixed & lhs, Fixed & rhs )
{
	return lhs < rhs ? lhs : rhs;
}

Fixed const &		Fixed::min( Fixed const & lhs, const Fixed & rhs )
{
	return lhs < rhs ? lhs : rhs;
}

Fixed &				Fixed::max( Fixed & lhs, Fixed & rhs )
{
	return lhs > rhs ? lhs : rhs;
}

Fixed const &		Fixed::max( Fixed const & lhs, const Fixed & rhs )
{
	return lhs > rhs ? lhs : rhs;
}

/*
 * ------------------------------- CONSTRUCTOR --------------------------------
 */

Fixed::Fixed() : _nbrFixed(0)
{

}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
}

Fixed::Fixed( int const nbr ) : _nbrFixed(nbr << Fixed::_nbrBits)
{

}

Fixed::Fixed( float const nbr ) : _nbrFixed(roundf(nbr * (1 << Fixed::_nbrBits)))
{

}


/*
 * -------------------------------- DESTRUCTOR --------------------------------
 */

Fixed::~Fixed()
{

}


/*
 * --------------------------------- OVERLOAD ---------------------------------
 */

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->_nbrFixed = rhs.getRawBits();
	return *this;
}

Fixed &				Fixed::operator++( void )
{
	this->_nbrFixed++;
	return *this;
}

Fixed &				Fixed::operator--( void )
{
	this->_nbrFixed--;
	return *this;
}

Fixed				Fixed::operator++( int )
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed				Fixed::operator--( int )
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed				Fixed::operator+( Fixed const & rhs ) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed				Fixed::operator-( Fixed const & rhs ) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed				Fixed::operator*( Fixed const & rhs ) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed				Fixed::operator/( Fixed const & rhs ) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool				Fixed::operator<( Fixed const & rhs ) const
{
	return this->_nbrFixed < rhs._nbrFixed;
}

bool				Fixed::operator>( Fixed const & rhs ) const
{
	return this->_nbrFixed > rhs._nbrFixed;
}

bool				Fixed::operator<=( Fixed const & rhs ) const
{
	return this->_nbrFixed <= rhs._nbrFixed;
}

bool				Fixed::operator>=( Fixed const & rhs ) const
{
	return this->_nbrFixed >= rhs._nbrFixed;
}

bool				Fixed::operator==( Fixed const & rhs ) const
{
	return this->_nbrFixed == rhs._nbrFixed;
}

bool				Fixed::operator!=( Fixed const & rhs ) const
{
	return this->_nbrFixed != rhs._nbrFixed;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
 * --------------------------------- METHODS ---------------------------------
 */

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
