/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:40:41 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/09 21:40:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:

	HumanB( std::string name );
	void		attack( void ) const;
	void		setWeapon( Weapon& weapon );

	private:

	Weapon*			_weapon;
	std::string		_name;
};

#endif
