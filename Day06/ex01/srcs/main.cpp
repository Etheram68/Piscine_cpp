/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:16:24 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 19:16:24 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "serialize.h"

int				main()
{
	std::srand(static_cast<unsigned int>(time(0)));
	void *serial = serialize();
	if (!serial)
	{
		std::cout << "Failed to allocate memory" << std::endl;
		return EXIT_FAILURE;
	}
	unsigned char *c = reinterpret_cast<unsigned char *>(serial);
	for(size_t i = 0; i < 8; i++)
		std::cout << c[i];
	std::cout << " ";
	std::cout << *reinterpret_cast<int *>(c + 8);
	std::cout << " ";
	for(size_t i = 8 + sizeof(int); i < 16 + sizeof(int); i++)
		std::cout << c[i];
	std::cout << std::endl << std::endl;

	Data	*data = deserialize(serial);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	return EXIT_SUCCESS;
}
