/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.Class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:37:08 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 13:46:25 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.Class.hpp"

class Form;

class Bureaucrat
{

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();

				virtual const char *	what( void ) const throw();

		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();

				virtual const char *	what( void ) const throw();
		};

		Bureaucrat();
		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &				operator=( Bureaucrat const & rhs );
		int							operator+=( int const rhs );
		int							operator-=( int const rhs );
		int							operator++( void );
		int							operator++( int );
		int							operator--( void );
		int							operator--( int );

		std::string const &			getName( void ) const;
		int							getGrade( void ) const;
		void						incGrade( void );
		void						decGrade( void );
		void						signForm( Form & form );

	private:

		std::string	const			_name;
		int							_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ************************************************ BUREAUCRAT_CLASS_H */
