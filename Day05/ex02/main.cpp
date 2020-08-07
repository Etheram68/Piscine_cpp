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
#include "ShrubberyCreationForm.Class.hpp"

int					main()
{
	Bureaucrat		character1;
	Bureaucrat		character2("Alexa", 10);
	Bureaucrat		Boss("Boss", 1);

	std::cout << "* Presentation des characters *" << std::endl \
		<< character1 << std::endl << character2 << std::endl \
		<< Boss << std::endl << std::endl;

	Form *		form1 = new ShrubberyCreationForm("test");

	std::cout << "* Presentation Shrubbery Form *" << std::endl << form1 << std::endl;

	character1.signForm(*form1);
	std::cout << std::endl;
	try
	{
		form1->execute(character1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	character2.signForm(*form1);
	std::cout << std::endl;
	character2.signForm(*form1);
	std::cout << std::endl;
	try
	{
		form1->execute(character1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		form1->execute(Boss);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	delete form1;
	return 0;
}
