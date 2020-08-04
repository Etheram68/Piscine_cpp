/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:14:59 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 14:14:59 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:

		virtual ~ISquad() {};

		virtual int					getCount() const = 0;
		virtual ISpaceMarine *		getUnit( int ) const = 0;
		virtual int					push( ISpaceMarine * marine ) = 0;
};


#endif
