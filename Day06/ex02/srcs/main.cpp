/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 09:15:52 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/12 09:15:52 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "identify.h"

Base			*generate(void)
{
	switch (int r = rand() % 3)
	{
	case 1:
		return new A();

	case 2:
		return new B();

	default: return new C();
	}
}

int				main()
{
	srand(static_cast<unsigned int>(time(0)));

	for(int i = 0; i < 10; i++)
	{
		Base	*rand = generate();
		std::cout << i + 1 << " Ptr: ";
		identify_from_pointer(rand);
		std::cout << i + 1 << " Ref: ";
		identify_from_reference(*rand);
		std::cout << std::endl << std::endl;
	}

	return EXIT_SUCCESS;
}
