/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 17:56:22 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/17 17:56:22 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Human.hpp"

int			main()
{
	Human			player;
	std::string		target("Nothing");
	std::string		action;

	while (action.find("exit"))
	{
		std::cout << "Choose an action :" << std::endl;
		std::cout << "melee" << std::endl << "ranged" \
			<< std::endl << "intimidating" << std::endl << "exit" \
			<< std::endl << std::endl << "> ";
		std::cin >> action;
		if (!action.find("exit"))
			break;
		std::cout << "Enter a target:" << std::endl << "> ";
		std::cin.ignore();
		std::getline(std::cin, target);
		std::cout << std::endl;
		if (action.compare("melee") || action.compare("ranged") \
			|| action.compare("intimidating"))
			player.action(action, target);
	}
	return EXIT_SUCCESS;
}
