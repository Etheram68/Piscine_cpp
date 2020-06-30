/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:23:15 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 12:23:15 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:

	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string login, std::string postal_address, std::string email,
		std::string address, std::string phone, std::string birth,
		std::string favorite_meal, std::string underwear_color,
		std::string darkest_secret);
	void			print_contact() const;
	static int		numberInstances();

	private:

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email;
	std::string		address;
	std::string		phone_number;
	std::string		birthday;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
	static int		compteur;
};

Contact			ft_add_user(void);

#endif
