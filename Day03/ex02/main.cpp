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
#include "ClapTrap.Class.hpp"


int				main()
{
	ScavTrap	clap2("ClapTrap");
	FragTrap	clap1("FragTrap");

	srand(time(0));

	return EXIT_SUCCESS;
}
