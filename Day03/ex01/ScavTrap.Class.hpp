/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:02:50 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 15:10:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>

class ScavTrap
{

	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void			rangedAttack( std::string const & target );
		void			meleeAttack( std::string const & target );
		void			challengeNewcomer();

		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		int				getNbHit( void ) const;
		void			setNbHit( int value );
		int				getNbEnergy( void ) const;
		void			setNbEnergy( int value );

	private:

		ScavTrap();

		std::string			_name;
		int					_hit;
		int					_maxHit;
		int					_energy;
		int					_maxEnergy;
		int					_level;
		int					_meleeAtkDmg;
		int					_rangedAtkDmg;
		int					_ArmorDmgReduc;

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ************************************************** SCAVTRAP_CLASS_H */
