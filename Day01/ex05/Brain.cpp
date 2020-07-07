/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:13:16 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 16:13:16 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>

#include "Brain.hpp"

Brain::Brain() {}

std::string		Brain::identify( void ) const
{
	std::stringstream	str;

	str << this;
	return str.str();
}
