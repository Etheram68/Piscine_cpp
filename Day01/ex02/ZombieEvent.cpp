/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:15:08 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 11:15:08 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ctime>
#include <cstdlib>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

std::string		ZombieEvent::_name[10] = {
	"Dissolver", "Drowner", "Gagger", "Berserker",
	"Cannibal", "Peeler", "Wriggler", "Husk Zombie",
	"Tumor Zombie", "Sprouter"
};

void			ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, _type));
}

void		ZombieEvent::randomChump( void ) const
{
	Zombie z = Zombie(ZombieEvent::_name[rand() % 10], _type);
}
