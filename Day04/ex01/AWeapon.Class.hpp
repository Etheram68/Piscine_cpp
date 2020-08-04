/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:49:53 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:44:27 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon( std::string const & name, int apcost, int damage );
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &			operator=( AWeapon const & rhs );

		std::string const	getName( void ) const;
		int					getAPCost( void ) const;
		int					getDamage( void ) const;
		virtual void		attack( void ) const = 0;

	protected:

		std::string			_name;
		int					_damage;
		int					_APCost;

	private:

		AWeapon();

};

#endif /* *************************************************** AWEAPON_CLASS_H */
