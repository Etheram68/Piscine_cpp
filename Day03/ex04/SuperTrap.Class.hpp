/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 15:04:18 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/30 15:07:54 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
# define SUPERTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "FragTrap.Class.hpp"
# include "NinjaTrap.Class.hpp"
# include "ClapTrap.Class.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{

	public:

		SuperTrap( std::string name );
		SuperTrap( SuperTrap const & src );
		~SuperTrap();


	private:

};

#endif /* ************************************************* SUPERTRAP_CLASS_H */
