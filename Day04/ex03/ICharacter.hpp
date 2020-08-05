/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:58:57 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 10:58:57 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "AMateria.Class.hpp"

class AMateria;

class ICharacter
{
	public:

		virtual ~ICharacter() {};
		virtual std::string const &		getName( void ) const = 0;
		virtual void					equip( AMateria * m ) = 0;
		virtual void					unequip( int idx ) = 0;
		virtual void					use( int idx, ICharacter & target ) = 0;
};

#endif
