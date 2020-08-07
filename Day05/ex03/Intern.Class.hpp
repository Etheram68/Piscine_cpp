/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:40:56 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/07 14:54:05 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <iostream>
# include <string>
# include "Form.Class.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form *			makeForm( std::string type, std::string target );

	private:

		Form *			_newPresidentialForm( std::string const & target );
		Form *			_newRobotmyForm( std::string const & target );
		Form *			_newShrubberyForm( std::string const & target );

};

#endif /* **************************************************** INTERN_CLASS_H */
