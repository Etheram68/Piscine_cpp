/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.Class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:08:28 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 14:42:04 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		virtual ~AssaultTerminator();

		virtual void				battleCry( void ) const;
		virtual void				rangedAttack( void ) const;
		virtual void				meleeAttack( void ) const;

		virtual ISpaceMarine*		clone( void ) const;

	private:

};

#endif /* ***************************************** ASSAULTTERMINATOR_CLASS_H */
