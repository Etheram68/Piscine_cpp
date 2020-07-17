/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:16:34 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/16 11:16:34 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "replace.h"

void			ft_change_occurence( std::string const & buf, char *av[] )
{
	std::string		filename(av[1]);

	filename += ".replace";
	std::ofstream	file(filename.c_str());
	if (file.good())
	{
		file << buf;
		file.close();
	}
	else
		std::cout << "Error:" << std::endl << "Impossible to open the file" \
			<< std::endl;
}

void			ft_readfile( std::ifstream& file, char *av[] )
{
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		buffer;
	std::string		tmp;
	std::size_t		found(0);

	if (s1.empty() || s2.empty())
	{
		std::cout << "Error:" << std::endl << "string original or string replace is empty"\
			<< std::endl;
		file.close();
		exit(EXIT_FAILURE);
	}
	while (getline(file, buffer))
	{
		while ((found = buffer.find(s1, found + 1)) != std::string::npos)
			buffer.replace(found, s1.size(), s2.c_str());
		tmp += buffer;
		tmp += '\n';
	}
	ft_change_occurence(tmp, av);
}

void			ft_openfile( char *av[] )
{
	std::string		filename(av[1]);

	if (!filename.empty())
	{
		std::ifstream file(filename.c_str());
		if (file.good())
			ft_readfile(file, av);
		else
		{
			std::cout << "Error:" << std::endl << "Impossible to open the file" \
				<< std::endl;
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		std::cout << "Filename is empty" << std::endl;
		exit(EXIT_FAILURE);
	}
}
