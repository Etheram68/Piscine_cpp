/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:07:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 12:38:43 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>

class FragTrap
{

	public:

		FragTrap( FragTrap const & src );
		FragTrap( std::string name );
		~FragTrap();

		void			rangedAttack( std::string const & target );
		void			meleeAttack( std::string const & target );
		void			wordAttack( std::string const & target );
		void			turretAttack( std::string const & target );
		void			carnageAttack( std::string const & target );
		void			vaulthunter_dot_exe( std::string const & target );

		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		int				getNbHit( void ) const;
		void			setNbHit( int value );
		int				getNbEnergy( void ) const;
		void			setNbEnergy( int value );

	private:

		FragTrap();

		std::string		_name;
		int				_hit;
		int				_maxHit;
		int				_energy;
		int				_maxEnergy;
		int				_level;
		int				_meleeAtkDmg;
		int				_rangedAtkDmg;
		int				_ArmorDmgReduc;

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ************************************************** FRAGTRAP_CLASS_H */
