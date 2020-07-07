/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:11:42 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 14:11:42 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>

# include "Zombie.hpp"

class ZombieHorde
{
	public:

	ZombieHorde(int n);
	~ZombieHorde();
	void	announce( void ) const;

	private:

	int					_nb;
	Zombie				*_zombies;
	static std::string	_name[10];
};

#endif
