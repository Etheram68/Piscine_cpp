/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:40:36 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 14:40:36 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"

Contact		ft_add_user()
{
	std::string		value[12]{
		"first_name", "last_name", "nickname", "login", "postal_address",
		"email", "address", "phone_number", "birthday", "favorite_meal",
		"underwear_color", "darkest_secret"
	};

	for (int i = 0; i < 12; i++)
	{
		std::cout << value[i] << std::endl << "> ";
		if (i == 0)
			std::cin.ignore();
		std::getline(std::cin, value[i]);
	}
	Contact		user(value[0], value[1], value[2], value[3], value[4],
		value[5], value[6], value[7], value[8], value[9], value[10], value[11]);
	return (user);
}
