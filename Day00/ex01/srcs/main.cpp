/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:41:55 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 09:41:55 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "directory.h"

int		main()
{
	std::string		command;

	do
	{
		ft_print_prompt();
		std::cin >> command;
		std::cout << std::endl;
		if (command == "ADD")
			ft_add_user();
		else if (command == "SEARCH")
			ft_search_user();
		else if (command != "EXIT")
			system("clear");
	} while (command != "EXIT");
	return (EXIT_SUCCESS);
}
