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

#include <stdexcept>
#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"
#include "ShrubberyCreationForm.Class.hpp"
#include "RobotomyRequestForm.Class.hpp"
#include "PresidentialPardonForm.Class.hpp"
#include "Intern.Class.hpp"

int					main()
{
	Bureaucrat		character1;
	Bureaucrat		character2("Alexa", 10);
	Bureaucrat		Boss("Boss", 1);


	std::cout << "* Presentation des characters *" << std::endl \
		<< character1 << std::endl << character2 << std::endl \
		<< Boss << std::endl << std::endl;

	Form *		form1;
	Form *		form2;
	Form *		form3;
	Form *		form4;

	Intern			intern;

	try
	{
		form1 = intern.makeForm("presidential pardon", "Bender");
		if (!form1)
			throw std::invalid_argument("Argument error");
		else
			std::cout << *form1 << std::endl << std::endl;
		form2 = intern.makeForm("robotmy request", "Jhon");
		if (!form2)
			throw std::invalid_argument("Argument error");
		else
			std::cout << *form2 << std::endl << std::endl;
		form3 = intern.makeForm("shruberry creation", "Test");
		if (!form3)
			throw std::invalid_argument("Argument error");
		else
			std::cout << *form3 << std::endl << std::endl;
		form4 = intern.makeForm("yshruberry creation", "Test");
		if (!form4)
			throw std::invalid_argument("Argument error");
		else
			std::cout << *form4 << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
