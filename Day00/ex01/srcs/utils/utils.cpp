/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:43:36 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 09:43:36 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "directory.h"

void		ft_print_prompt(void)
{
	std::cout << "< ADD" << std::endl << "< SEARCH" << std::endl \
		<< "< EXIT" << std::endl << std::endl << "> ";
}
