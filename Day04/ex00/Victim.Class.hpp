/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:39:55 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/03 17:02:10 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim( std::string name );
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );

		std::string		getName( void ) const;
		void			setName( std::string name );
		virtual void	getPolymorphed( void ) const;

	private:

		Victim();

		std::string		_name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* **************************************************** VICTIM_CLASS_H */
