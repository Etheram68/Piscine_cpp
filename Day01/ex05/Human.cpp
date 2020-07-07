/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:20:33 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 16:20:33 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

const Brain		&Human::getBrain( void ) const
{
	return this->_brain;
}

std::string		Human::identify( void ) const
{
	return this->_brain.identify();
}
