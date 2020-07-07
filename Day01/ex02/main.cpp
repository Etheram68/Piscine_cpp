/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:26:43 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 11:26:43 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include"Zombie.hpp"


int			main()
{
	ZombieEvent		z;

	srand(time(0));
	z.setZombieType("Walker");
	Zombie *zombie = z.newZombie("Dreamer");
	Zombie *zombie2 = z.newZombie("Scraper");
	for (int i = 0; i < 10; i++)
		z.randomChump();
	delete zombie;
	delete zombie2;
}
