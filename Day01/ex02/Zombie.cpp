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

Zombie::Zombie(std::string name, std::string type)
	: _name(name), _type(type)
{
	advert();
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> " \
		<< " is dead !" << std::endl;
}

void			Zombie::advert( void ) const
{
	std::cout << "<" << _name << " (" << _type << ")> " \
	<< "Braiiiiiinnnnssss ....." << std::endl;
}
