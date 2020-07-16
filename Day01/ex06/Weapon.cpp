/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:12:02 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/09 21:12:02 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"

Weapon::Weapon( std::string type) : _type(type)
{

}

const std::string&			Weapon::getType( void )
{
	return this->_type;
}

void						Weapon::setType( std::string str )
{
	this->_type = str;
}
