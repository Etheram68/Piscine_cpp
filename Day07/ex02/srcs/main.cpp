/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 09:48:12 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 09:48:12 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.tpp"

int				main()
{
	Array<int> a(20);

	std::cout << "A : ";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "A : ";
	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = static_cast<int>(i);
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<int> b(a);

	std::cout << "B : ";
	for (size_t i = 0; i < b.size(); i++)
	{
		b[i] = static_cast<int>(i + 1);
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "A : ";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	Array<int> c;
	c = b;

	std::cout << "C : ";
	for (size_t i = 0; i < c.size(); i++)
	{
		c[i] = static_cast<int>(i + 2);
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "B : ";
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	return 0;
}
