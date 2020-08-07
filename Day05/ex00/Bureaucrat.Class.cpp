/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.Class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:37:08 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/06 17:49:37 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.Class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Jhon"), _grade(150)
{

}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) :
	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
//		const_cast<std::string&>(this->_name) = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

void						Bureaucrat::operator+=( int const rhs )
{
	if (_grade - rhs < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= rhs;
}

void						Bureaucrat::operator-=( int const rhs )
{
	if (_grade + rhs > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += rhs;
}

void						Bureaucrat::operator++( void )
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void						Bureaucrat::operator++( int )
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void						Bureaucrat::operator--( void )
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

void						Bureaucrat::operator--( int )
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

std::ostream &				operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &			Bureaucrat::getName( void ) const
{
	return this->_name;
}

int							Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void						Bureaucrat::incGrade( void )
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void						Bureaucrat::decGrade( void )
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade += 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {};
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {};

Bureaucrat::GradeTooLowException::GradeTooLowException() {};
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {};

const char *				Bureaucrat::GradeTooHighException::what() const throw()
{
	return "ERROR: Grade too hight (< 1)";
}

const char *				Bureaucrat::GradeTooLowException::what() const throw()
{
	return "ERROR: Grade too low (> 150)";
}

/* ************************************************************************** */
