/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:07:14 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 10:07:14 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string breed, int price) :
	_name(name), _breed(breed), _price(price), _free(true)
{
	std::cout << name << " is born !!" << std::endl;
}

Pony::~Pony()
{
	std::cout << _name << " is dead !!" << std::endl;
}

void		Pony::describe( void ) const
{
	std::cout << "This name is " << _name << std::endl \
		<< "This breed is " << _breed << std::endl \
		<< "Its price is " << _price << std::endl;
}

bool		Pony::isFree( void ) const
{
	return _free;
}
