/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 17:33:49 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/17 17:33:49 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Human.hpp"

void		Human::action( std::string const & action_name, std::string const & target )
{
	int		i(0);
	void		(Human::*ptr[])( std::string const & ) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	std::string	commands[] =
	{
		"melee",
		"ranged",
		"intimidating"
	};
	while (i < 3)
	{
		if (commands[i] == action_name)
		{
			(this->*ptr[i])(target);
			break ;
		}
		i++;
	}
}


void		Human::meleeAttack( std::string const & target )
{
	std::cout << "Starting a melee attack on " << target << std::endl << std::endl;
}

void		Human::rangedAttack( std::string const & target )
{
	std::cout << "Starting a ranged attack on " << target << std::endl << std::endl;
}

void		Human::intimidatingShout( std::string const & target )
{
	std::cout << "Starting a intimidating shout on " << target << std::endl << std::endl;
}
