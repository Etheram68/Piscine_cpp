/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:37:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 14:37:40 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../add_user/ClassContact.hpp"

void		ft_print_list(Contact instance[8])
{
	int		i(0), nb(0);

	nb = Contact::numberInstances();
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "Index" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "FirstName" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "LastName" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "Nickname" << "|" << std::endl;
	while (i < nb)
	{
		if (!instance[i].is_empty())
			instance[i].print_list(i);
		i++;
	}
	std::cout << std::endl;
}

void		ft_search_user(Contact instance[8])
{
	std::string		command("");

	ft_print_list(instance);
}
