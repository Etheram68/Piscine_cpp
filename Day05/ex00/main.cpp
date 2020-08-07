/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 16:42:14 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/06 16:42:14 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.Class.hpp"

int					main()
{
	Bureaucrat		character1;
	Bureaucrat		character2("Alexa", 10);
	Bureaucrat		Boss("Boss", 1);

	std::cout << "* Presentation des characters *" << std::endl
		<< character1 << std::endl << character2 << std::endl \
		<< Boss << std::endl << std::endl;
	try
	{
		character1++;
		std::cout << character1 << std::endl;
		character1--;
		std::cout << character1 << std::endl << std::endl;
		character1--;
		std::cout << character1 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		character2 -= 10;
		std::cout << character2 << std::endl;
		character2 += 19;
		std::cout << character2 << std::endl << std::endl;
		character2++;
		std::cout << character2 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Boss--;
		std::cout << Boss << std::endl;
		Boss = character1;
		std::cout << Boss << std::endl << std::endl;
		Boss -= 1500000000;
		std::cout << Boss << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
