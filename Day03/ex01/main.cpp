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
#include "ScavTrap.Class.hpp"

void			clap1()
{
	FragTrap	clap1("FragTrap");

	while (clap1.getNbHit() > 0)
	{
		std::cout << "FragTrap: " << clap1 << std::endl << std::endl;
		if (clap1.getNbHit() < rand() % (100 - 1 + 1) + 1)
			clap1.beRepaired( 80 );
		if (clap1.getNbEnergy() < rand() % (100 - 1 + 1) + 1)
			clap1.setNbEnergy( rand() % (100 - 1 + 1) + 1 );
		clap1.vaulthunter_dot_exe("Jack");
		clap1.takeDamage(rand() % (100 - 1 + 1) + 1);
	}
}

int				main()
{
	ScavTrap	clap2("ClapTrap");

	srand(time(0));
	clap1();
	while (clap2.getNbHit() > 0)
	{
		std::cout << std::endl << "ClapTrap" << clap2 << std::endl << std::endl;
		clap2.challengeNewcomer();
		clap2.takeDamage(rand() % (100 - 1 + 1) + 1);
	}
	std::cout << std::endl << clap2 << std::endl ;
	return EXIT_SUCCESS;
}
