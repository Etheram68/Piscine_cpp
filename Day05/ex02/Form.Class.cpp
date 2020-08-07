/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:13:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:01:58 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( std::string name, int lvSigned, int lvExec ) :
	_name(name), _target(""), _signed(false), _gradeSigned(lvSigned), _gradeExec(lvExec)
{
	if (lvSigned < 1)
		throw GradeTooHighException();
	else if (lvSigned > 150)
		throw GradeTooLowException();
	if (lvExec < 1)
		throw GradeTooHighException();
	else if (lvExec > 150)
		throw GradeTooLowException();
}

Form::Form( std::string name, int lvSigned, int lvExec, std::string target ) :
	_name(name), _target(target), _signed(false), _gradeSigned(lvSigned), _gradeExec(lvExec)
{
	if (lvSigned < 1)
		throw GradeTooHighException();
	else if (lvSigned > 150)
		throw GradeTooLowException();
	if (lvExec < 1)
		throw GradeTooHighException();
	else if (lvExec > 150)
		throw GradeTooLowException();
}

Form::Form( Form const & src ) :
	_name(src._name), _target(src._target), _signed(src._signed),
	_gradeSigned(src._gradeSigned), _gradeExec(src._gradeExec)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &						Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		_signed = rhs._signed;
		const_cast<int&>(_gradeExec) = rhs._gradeExec;
		const_cast<int&>(_gradeSigned) = rhs._gradeSigned;
	}
	return *this;
}

std::ostream &				operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " is ";
	if (i.getSigned())
		o << " status signed. ";
	else
		o << " status unsigned. ";
	o << "Form need grade " << i.getGrdSign() << " for signed and grade " \
		<< i.getGrdExec() << " for exec.";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void						Form::beSigned( Bureaucrat & target )
{
	if (target.getGrade() > this->_gradeSigned)
		throw GradeTooLowException();
	this->_signed = true;
}

void						Form::execute( Bureaucrat const & executor ) const
{
	if (this->_signed)
	{
		if (executor.getGrade() > this->_gradeExec)
			throw GradeTooLowException();
		this->action();
	}
	else
		std::cout << this->_name << " is not signed. Valide the document for execute this."
			<< std::endl;
}

std::string const &			Form::getName( void ) const
{
	return this->_name;
}

std::string const &			Form::getTarget( void ) const
{
	return this->_target;
}

int 						Form::getGrdExec( void ) const
{
	return this->_gradeExec;
}

int 						Form::getGrdSign( void ) const
{
	return this->_gradeSigned;
}

bool						Form::getSigned( void ) const
{
	return this->_signed;
}

Form::GradeTooHighException::GradeTooHighException() {};
Form::GradeTooHighException::~GradeTooHighException() throw() {};

Form::GradeTooLowException::GradeTooLowException() {};
Form::GradeTooLowException::~GradeTooLowException() throw() {};

const char *				Form::GradeTooHighException::what() const throw()
{
	return "Grade too hight (< 1)";
}

const char *				Form::GradeTooLowException::what() const throw()
{
	return "Grade too low (> 150)";
}

/* ************************************************************************** */
