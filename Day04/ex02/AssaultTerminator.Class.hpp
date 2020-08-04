/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.Class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:08:28 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 16:10:01 by frfrey           ###   ########lyon.fr   */
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
		~AssaultTerminator();

		virtual void				battleCry( void ) const;
		virtual void				rangedAttack( void ) const;
		virtual void				meleeAttack( void ) const;

		virtual ISpaceMarine*		clone( void ) const;

	private:

};

#endif /* ***************************************** ASSAULTTERMINATOR_CLASS_H */
