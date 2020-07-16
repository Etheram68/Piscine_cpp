/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:41:42 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/09 21:41:42 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{

}

void			HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void			HumanB::attack( void ) const
{
	std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
}
