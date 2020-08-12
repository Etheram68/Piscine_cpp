/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyRef.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 09:20:48 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/12 09:20:48 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "identify.h"

void		identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A"<< std::endl;
	if (dynamic_cast<B *>(&p))
		std::cout << "B"<< std::endl;
	if (dynamic_cast<C *>(&p))
		std::cout << "C"<< std::endl;
}
