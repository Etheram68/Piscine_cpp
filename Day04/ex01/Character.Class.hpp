/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:50:01 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:09:08 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include <string>
# include "AWeapon.Class.hpp"
# include "Enemy.Class.hpp"

class Character
{

	public:

		Character( std::string const & name );
		Character( Character const & src );
		~Character();

		Character &			operator=( Character const & rhs );

		void				recoverAP( void );
		void				equip( AWeapon * weapon );
		void				attack( Enemy * target );
		std::string const	getName( void ) const;
		std::string const	getWeapon( void ) const;
		int					getAp( void ) const;
		bool				hasWeapon( void ) const;

	private:

		Character();

		std::string			_name;
		int					_ap;
		AWeapon *			_weapon;

};

std::ostream &				operator<<( std::ostream & o, Character const & i );

#endif /* ************************************************* CHARACTER_CLASS_H */
