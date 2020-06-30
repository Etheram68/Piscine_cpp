/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:14:47 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 11:14:47 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int		Contact::compteur = 0;

Contact::Contact() : first_name(""), last_name(""),
			nickname(""), login(""), postal_address(""),
			email(""), address(""), phone_number(""), birthday(""),
			favorite_meal(""), underwear_color(""),
			darkest_secret("")
{

}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string login, std::string postal_address, std::string email, \
		std::string address, std::string phone, std::string birth, \
		std::string favorite_meal, std::string underwear_color, \
		std::string darkest_secret) : first_name(first_name), last_name(last_name),
			nickname(nickname), login(login), postal_address(postal_address),
			email(email), address(address), phone_number(phone), birthday(birth),
			favorite_meal(favorite_meal), underwear_color(underwear_color),
			darkest_secret(darkest_secret)
		{
			++compteur;
		}

void		Contact::print_contact() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal Address: " << postal_address << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Birthday: " << birthday << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear Color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

int			Contact::numberInstances()
{
	return (compteur);
}
