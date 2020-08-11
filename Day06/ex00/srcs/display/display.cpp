/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_argv.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:22:41 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 14:22:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "convert.h"
#include "../converter/Converter.hpp"

void			display(std::string argument)
{
	Converter		conv(argument);

	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(conv);
		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Non displayable";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(conv);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout <<"float: ";
	try
	{
		std::cout << static_cast<float>(conv) << "f";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(conv);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;
}
