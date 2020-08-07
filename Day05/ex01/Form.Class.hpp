/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:13:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 10:10:43 by frfrey           ###   ########lyon.fr   */
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
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string const &			getName( void ) const;
		int							getGrdSign( void ) const;
		int							getGrdExec( void ) const;
		bool						getSigned( void ) const;
		void						beSigned( Bureaucrat & target );

	private:

		Form();

		std::string const			_name;
		bool						_signed;
		int const					_gradeSigned;
		int	const					_gradeExec;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ****************************************************** FORM_CLASS_H */
