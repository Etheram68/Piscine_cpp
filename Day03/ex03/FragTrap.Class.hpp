/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:07:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/29 17:11:09 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "ClapTrap.Class.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap();

		void			wordAttack( std::string const & target );
		void			turretAttack( std::string const & target );
		void			carnageAttack( std::string const & target );
		void			vaulthunter_dot_exe( std::string const & target );


	private:

	FragTrap();

};

#endif /* ************************************************** FRAGTRAP_CLASS_H */
