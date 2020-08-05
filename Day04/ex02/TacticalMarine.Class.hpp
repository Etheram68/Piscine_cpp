/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.Class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:30:42 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 14:42:13 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		virtual ~TacticalMarine();

		virtual void				battleCry( void ) const;
		virtual void				rangedAttack( void ) const;
		virtual void				meleeAttack( void ) const;

		virtual ISpaceMarine*		clone( void ) const;

	private:

};


#endif /* ******************************************** TACTICALMARINE_CLASS_H */
