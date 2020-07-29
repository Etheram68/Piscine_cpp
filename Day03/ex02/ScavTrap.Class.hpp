/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:02:50 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 17:11:16 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "ClapTrap.Class.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void			challengeNewcomer();
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

	private:

		ScavTrap();
};

#endif /* ************************************************** SCAVTRAP_CLASS_H */
