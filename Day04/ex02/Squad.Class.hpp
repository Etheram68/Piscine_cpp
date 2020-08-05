/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:18:18 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 15:35:19 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		virtual ~Squad();

		Squad &			operator=( Squad const & rhs );

		virtual int				getCount( void ) const;
		virtual int				push( ISpaceMarine* marine );
		virtual ISpaceMarine*	getUnit( int nbr ) const;

	private:

		typedef struct			s_container
		{
			ISpaceMarine		*unit;
			struct s_container	*next;
		}						t_container;

		bool					_isIn( ISpaceMarine *marine, t_container *squad );

		int						_count;
		t_container				*_squad;

};


#endif /* ***************************************************** SQUAD_CLASS_H */
