/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:40:56 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 15:04:22 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.Class.hpp"
#include "PresidentialPardonForm.Class.hpp"
#include "RobotomyRequestForm.Class.hpp"
#include "ShrubberyCreationForm.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

Form *					Intern::_newPresidentialForm( std::string const & target )
{
	return new PresidentialPardonForm(target);
}

Form *					Intern::_newRobotmyForm( std::string const & target )
{
	return new RobotomyRequestForm(target);
}

Form *					Intern::_newShrubberyForm( std::string const & target )
{
	return new ShrubberyCreationForm(target);
}

Form *					Intern::makeForm( std::string type, std::string target )
{
	int			i(0);
	Form		*(Intern::*ptr[])( std::string const & ) =
	{
		&Intern::_newPresidentialForm,
		&Intern::_newRobotmyForm,
		&Intern::_newShrubberyForm

	};
	std::string	commands[] =
	{
		"presidential pardon",
		"robotmy request",
		"shruberry creation"
	};
	while (i < 3)
	{
		if (commands[i] == type)
			return (this->*ptr[i])(target);
		i++;
	}
	return NULL;
}

/* ************************************************************************** */
