/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.Class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:11:03 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:26:49 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
	Form("RobotomyForm", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
	Form(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
		const_cast<int&>(this->_gradeExec) = rhs._gradeExec;
		const_cast<int&>(this->_gradeSigned) = rhs._gradeSigned;
		const_cast<std::string&>(this->_target) = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void						RobotomyRequestForm::action( void ) const
{
	srand(time(NULL));

	std::cout << "* DOIIING DOIIING *" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " Has been robotomized." << std::endl;
	else
		std::cout << this->getTarget() << " Has not robotomized." << std::endl;
}

/* ************************************************************************** */
