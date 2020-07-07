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
	name(name), breed(breed), price(price), free(true)
{
	std::cout << name << " is born !!" << std::endl;
}

Pony::~Pony()
{
	std::cout << name << " is dead !!" << std::endl;
}

void		Pony::describe( void ) const
{
	std::cout << "This name is " << name << std::endl \
		<< "This breed is " << breed << std::endl \
		<< "Its price is " << price << std::endl;
}

bool		Pony::isFree( void ) const
{
	return free;
}
