/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:05:30 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 11:05:30 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : _name("Unknown"), _type("Unknown")
{

}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " \
		<< " is dead !" << std::endl;
}

void			Zombie::advert( void ) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " \
	<< "Braiiiiiinnnnssss ....." << std::endl;
}

void			Zombie::setName( std::string str )
{
	this->_name = str;
}

void			Zombie::setType( std::string str )
{
	this->_type = str;
}
