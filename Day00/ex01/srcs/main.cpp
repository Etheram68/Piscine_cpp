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
	std::string		command("");
	Contact			instance[8];
	int				i(0);

	do
	{
		i = Contact::numberInstances();
		ft_print_prompt();
		std::cin >> command;
		std::cout << std::endl;
		if (command == "ADD")
		{
			if (i < 8)
				instance[i] = ft_add_user();
			else
				std::cout << "Your Directory is Full" << std::endl;
		}
		else if (command == "SEARCH")
			;//ft_search_user();
		else if (command != "EXIT")
			system("clear");
	} while (command != "EXIT");
	return (EXIT_SUCCESS);
}
