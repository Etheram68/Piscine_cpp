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
#include "NinjaTrap.Class.hpp"
#include "ClapTrap.Class.hpp"
#include "SuperTrap.Class.hpp"


int				main()
{
	ScavTrap	clap("SC4V-TP");
	srand(time(0));
/*
	for ( int i = 0; i < 5; i++ )
		clap.takeDamage(20);
	std::cout << clap << std::endl << std::endl;
	for ( int i = 0; i < 5; i++ )
		clap.beRepaired(20);
	std::cout << clap << std::endl << std::endl;
	clap.rangedAttack("Jack");
	clap.meleeAttack("Bo Jack");

	for ( int i = 0; i < 7; i++ )
		clap.challengeNewcomer();
*/
	FragTrap	clap1("FR4V-TP");
/*
	for ( int i = 0; i < 5; i++ )
		clap1.takeDamage(20);
	std::cout << clap1 << std::endl << std::endl;
	for ( int i = 0; i < 5; i++ )
		clap1.beRepaired(20);
	std::cout << clap1 << std::endl << std::endl;
	clap1.rangedAttack("Jack");
	clap1.meleeAttack("Bo Jack");

	for ( int i = 0; i < 7; i++ )
		clap1.vaulthunter_dot_exe("BOSS");
*/
	NinjaTrap	clap2("NIJ4-TP");
/*

	for ( int i = 0; i < 5; i++ )
		clap2.takeDamage(20);
	std::cout << clap2 << std::endl << std::endl;
	for ( int i = 0; i < 5; i++ )
		clap2.beRepaired(20);
	std::cout << clap2 << std::endl << std::endl;

	clap2.ninjaShoebox(clap);
	clap2.ninjaShoebox(clap1);
	clap2.ninjaShoebox(clap2);*/

	ClapTrap	clap4("CL4P-TP", 10, 10, 10, 10, 1, 10, 10, 100);

//	clap2.ninjaShoebox(clap4);

	SuperTrap	clap5("SUPER-TP");

	for ( int i = 0; i < 5; i++ )
		clap5.takeDamage(20);
	std::cout << clap5 << std::endl << std::endl;
	for ( int i = 0; i < 5; i++ )
		clap5.beRepaired(20);
	std::cout << clap5 << std::endl << std::endl;
	clap5.rangedAttack("Jack");
	clap5.meleeAttack("Bo Jack");

	clap5.ninjaShoebox(clap);
	clap5.ninjaShoebox(clap1);
	clap5.ninjaShoebox(clap2);
	clap5.ninjaShoebox(clap4);

	for ( int i = 0; i < 7; i++ )
		clap5.vaulthunter_dot_exe("BOSS");

	return EXIT_SUCCESS;
}
