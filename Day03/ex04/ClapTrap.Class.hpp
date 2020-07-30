/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:30:04 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 15:11:57 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( std::string name, int hit, int maxHit, int energy, int maxEnergy,
		int level, int meleeAtkDmg, int rangedAtkDmg, int ArmorAtkReduc );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void			rangedAttack( std::string const & target );
		void			meleeAttack( std::string const & target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		int				getNbHit( void ) const;
		void			setNbHit( int value );
		int				getNbEnergy( void ) const;
		void			setNbEnergy( int value );
		std::string		getName( void ) const;

	protected:

		std::string		_name;
		int				_hit;
		int				_maxHit;
		int				_energy;
		int				_maxEnergy;
		int				_level;
		int				_meleeAtkDmg;
		int				_rangedAtkDmg;
		int				_ArmorDmgReduc;

	private:


};

std::ostream &		operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ************************************************** CLAPTRAP_CLASS_H */
