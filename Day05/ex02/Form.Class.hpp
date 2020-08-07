/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:13:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:06:40 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.Class.hpp"

class Bureaucrat;

class Form
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

		Form( std::string name, int lvSigned, int lvExec);
		Form( std::string name, int lvSigned, int lvExec, std::string target);
		Form( Form const & src );
		virtual ~Form();

		Form &						operator=( Form const & rhs );

		std::string const &			getName( void ) const;
		std::string const &			getTarget( void ) const;
		int							getGrdSign( void ) const;
		int							getGrdExec( void ) const;
		bool						getSigned( void ) const;
		void						beSigned( Bureaucrat & target );
		void						execute ( Bureaucrat const & executor ) const;

	protected:

		std::string const			_name;
		std::string					_target;
		bool						_signed;
		int const					_gradeSigned;
		int	const					_gradeExec;

	private:

		Form();
		virtual void				action( void ) const = 0;

};

std::ostream &						operator<<( std::ostream & o, Form const & i );

#endif /* ****************************************************** FORM_CLASS_H */
