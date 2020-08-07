/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.Class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:27:19 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:31:30 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
	Form("PardonPreseidential", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
	Form(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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

void						PresidentialPardonForm::action( void ) const
{
	std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox." << std::endl;
}

/* ************************************************************************** */
