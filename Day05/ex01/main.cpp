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
#include "Form.Class.hpp"

int					main()
{
	Bureaucrat		character1;
	Bureaucrat		character2("Alexa", 10);
	Bureaucrat		Boss("Boss", 1);

	std::cout << "* Presentation des characters *" << std::endl \
		<< character1 << std::endl << character2 << std::endl \
		<< Boss << std::endl << std::endl;

	Form			form32("Form32", 150, 50);
	Form			form142("Form142", 1, 1);

	std::cout << "* Presentation des Formulaires *" << std::endl \
		<< form32 << std::endl << form142 << std::endl;

	character1.signForm(form32);
	std::cout << std::endl;
	character1.signForm(form32);
	std::cout << std::endl;
	character1.signForm(form142);
	std::cout << std::endl;
	Boss.signForm(form142);


	return 0;
}
