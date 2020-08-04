/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:04:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:18:36 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

# include <iostream>
# include <string>
# include "AWeapon.Class.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );

		virtual void		attack( void ) const;

	private:

};

#endif /* *********************************************** PLASMARIFLE_CLASS_H */
