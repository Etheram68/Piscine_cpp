/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.Class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:37:08 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 13:48:49 by frfrey           ###   ########lyon.fr   */
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

int							Bureaucrat::operator+=( int const rhs )
{
	if (_grade - rhs < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= rhs;
	return _grade;
}

int							Bureaucrat::operator-=( int const rhs )
{
	if (_grade + rhs > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += rhs;
	return _grade;
}

int							Bureaucrat::operator++( void )
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
	return _grade;
}

int							Bureaucrat::operator++( int )
{
	Bureaucrat tmp(*this);

	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
	return tmp._grade;
}

int							Bureaucrat::operator--( void )
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
	return _grade;
}

int							Bureaucrat::operator--( int )
{
	Bureaucrat	tmp(*this);

	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
	return tmp._grade;
}

std::ostream &				operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void						Bureaucrat::signForm( Form & form )
{
	if (form.getSigned())
	{
		std::cout << this->_name << " cannot sign " << form.getName() \
			<< " because it is already signed." << std::endl;
	}
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		}
		catch(Form::GradeTooLowException const & e)
		{
			std::cout << this->_name << " cant sign " << form.getName() << " because " \
				<< e.what() << std::endl;
		}
	}

}

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
