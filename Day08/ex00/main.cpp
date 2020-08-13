/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:29:17 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 14:29:17 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <set>
#include "easyfind.hpp"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int			main()
{
	std::set<int>		tab;

	for (int i = 0; i < 10; i++)
		tab.insert(i);
	for (int i = -5; i <= 20; i++)
	{
		try
		{
			std::cout << easyfind(tab, i) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "couldn't find " << i << std::endl;
		}

	}
	return EXIT_SUCCESS;
}
