/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:06:28 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 10:06:28 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "FragTrap.Class.hpp"

int				main()
{
	FragTrap	slave("FragTrap");

	srand(time(0));
	while (slave.getNbHit() > 0)
	{
		std::cout << slave << std::endl << std::endl;
		if (slave.getNbHit() < rand() % (100 - 1 + 1) + 1)
			slave.beRepaired( 80 );
		if (slave.getNbEnergy() < rand() % (100 - 1 + 1) + 1)
			slave.setNbEnergy( rand() % (100 - 1 + 1) + 1 );
		slave.vaulthunter_dot_exe("Jack");
		slave.takeDamage(rand() % (100 - 1 + 1) + 1);
	}
	std::cout << std::endl << slave << std::endl ;
	return EXIT_SUCCESS;
}
