/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:09:28 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 11:09:28 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:

	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name) const;
	void	randomChump( void ) const;

	private:

	std::string		_type;
	static std::string _name[10];
};

#endif
