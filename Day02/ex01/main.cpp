/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:11:22 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/27 11:11:22 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int			main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return EXIT_SUCCESS;
}
