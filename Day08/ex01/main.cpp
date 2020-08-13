/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:44:19 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 15:44:19 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include "Span.hpp"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int			main()
{
	std::srand(static_cast<unsigned int>(time(0)));

	Span		tab(10000);

	for (int i = 0; i < 10000; i++)
		tab.addNumber(std::rand() % INT_MAX);

	std::cout << tab.shortestSpan() << std::endl;
	std::cout << tab.longestSpan() << std::endl << std::endl;

	Span		tab2(10);
	for (int i = 0; i < 10; i++)
	{
		int nb = std::rand() % 100;
		tab2.addNumber(nb);
		std::cout << nb << " ";
	}
	std::cout << std::endl;
	std::cout << tab2.shortestSpan() << std::endl;
	std::cout << tab2.longestSpan() << std::endl << std::endl;

	try
	{
		tab2.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cout << "Out of size" << std::endl;
	}

}
