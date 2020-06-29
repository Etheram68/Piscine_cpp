/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:01:26 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/29 16:01:26 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class Upper_String{
	public:
		std::string operator()(std::string const& str)
		{
			std::string	tmp(str);
			for(int y = 0; str[y]; y++)
				tmp[y] = toupper((int)str[y]);
			return tmp;
		}
};

int			main(int ac, char *av[])
{
	Upper_String	foncteur;

	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			std::cout << foncteur(av[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (EXIT_SUCCESS);
}
