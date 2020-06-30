/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:45:53 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 14:45:53 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

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
	void			print_list(int index) const;
	std::string		tronc_word(std::string word) const;
	bool			is_empty() const;
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

#endif
