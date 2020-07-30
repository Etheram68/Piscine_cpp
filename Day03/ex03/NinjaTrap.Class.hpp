/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:36:12 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 10:47:17 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "ClapTrap.Class.hpp"
# include "FragTrap.Class.hpp"
# include "ScavTrap.Class.hpp"

class NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap( std::string name );
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		void		ninjaShoebox( NinjaTrap & target );
		void		ninjaShoebox( ClapTrap & target );
		void		ninjaShoebox( FragTrap & target );
		void		ninjaShoebox( ScavTrap & target );

	private:

		NinjaTrap();

};

#endif /* ************************************************* NINJATRAP_CLASS_H */
