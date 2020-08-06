/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:59:31 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 16:59:31 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.Class.hpp"
#include "Peon.Class.hpp"
#include "Sorcerer.Class.hpp"

int				main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	Peon jor(joe);

	jor.setName("Jhon");

	std::cout << robert << jim << joe << jor;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jor);

	return EXIT_SUCCESS;
}
