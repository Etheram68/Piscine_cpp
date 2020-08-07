/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.Class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:34:27 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:05:56 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
	Form("ShrubberyForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
	Form(src)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void						ShrubberyCreationForm::action( void ) const
{
	const_cast<std::string&>(_target) += "_shrubbery";
	std::ofstream			file(_target.c_str());

	if (file)
	{
		file << "            &&& &&  & &&" << std::endl
      		<<	"        && &\\/&\\|& ()|/ @,&&" << std::endl
     		<< "       &\\/(/&/&||/& /_/)_&/_&" << std::endl
   			<< "     &() &\\/&|()|/&\\/ '%\" & ()" << std::endl
  			<< "    &_\\_&&_\\ |& |&&/&__%_/_& && " << std::endl
			<< "  &&   && & &| &| /& & % ()& /&& " << std::endl
 			<< "   ()&_---()&\\&\\|&&-&&--%---()~" << std::endl
     		<< "       &&     \\|||"	<< std::endl
            << "               |||" << std::endl
            << "               |||" << std::endl
            << "               |||" << std::endl
            << "         , -=-~  .-^- _" << std::endl;
		file.close();
	}
}

/* ************************************************************************** */
