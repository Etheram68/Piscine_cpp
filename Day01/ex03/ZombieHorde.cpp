/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:18:44 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 14:18:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde( int n ) : _nb(n)
{
	this->_zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->_zombies[i].setType("Walker");
		this->_zombies[i].setName(ZombieHorde::_name[rand() % 10]);
	}

}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

std::string		ZombieHorde::_name[10] = {
	"Dissolver", "Drowner", "Gagger", "Berserker",
	"Cannibal", "Peeler", "Wriggler", "Husk Zombie",
	"Tumor Zombie", "Sprouter"
};


void			ZombieHorde::announce( void ) const
{
	for (int i = 0; i < this->_nb; i++)
		_zombies[i].advert();
}
