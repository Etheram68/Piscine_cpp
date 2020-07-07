/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:20:19 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 10:20:19 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void		ponyOnTheStack( void )
{
	std::cout << "-- STACK --" << std::endl << std::endl;
	Pony		my_pony("Reine", "Frison", 11000);

	if (my_pony.isFree())
		my_pony.describe();
	else
		std::cout << "This pony is not free !" << std::endl;
}

void		ponyOnTheHeap( void )
{
	std::cout << "-- HEAP --" << std::endl << std::endl;
	Pony		*my_pony = new Pony("Pai", "Frison", 15000);

	if (my_pony->isFree())
		my_pony->describe();
	else
		std::cout << "This pony is not free !" << std::endl;
	delete my_pony;
}

int			main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (EXIT_SUCCESS);
}
