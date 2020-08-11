/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:14:44 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 14:14:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "convert.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int			main(int ac, char *av[])
{
	if (ac == 2)
		display(av[1]);
	else
		std::cout << "Error: You need enter a value" << std::endl \
			<< "./convert \"[argument]\"" << std::endl;

	return EXIT_SUCCESS;
}
