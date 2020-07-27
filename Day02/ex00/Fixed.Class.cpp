/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:46:12 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/27 11:03:18 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int const		Fixed::_nbrBits = 8;

Fixed::Fixed() : _nbrFixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
		this->_nbrFixed = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << "Value = " << i.getRawBits();
	return o;
}

int					Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbrFixed;
}

void				Fixed::setRawBits( int const raw )
{
	this->_nbrFixed = raw;
}

/* ************************************************************************** */
