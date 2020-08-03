/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:20:14 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 17:03:33 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include <iostream>
# include <string>
# include "Victim.Class.hpp"

class Sorcerer
{

	public:

		Sorcerer( std::string name, std::string title );
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );

		std::string		getName( void ) const;
		void			setName( std::string name );
		std::string		getTitle( void ) const;
		void			setTitle( std::string title );
		void			polymorph( Victim const & target ) const;

	private:

		Sorcerer();

		std::string		_name;
		std::string		_title;

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ************************************************** SORCERER_CLASS_H */
