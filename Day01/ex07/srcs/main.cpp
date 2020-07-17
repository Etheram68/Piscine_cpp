/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:16:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/15 17:16:40 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "replace.h"

int			main( int ac, char *av[] )
{
	if (ac == 4)
		ft_openfile(av);
	else
		std::cout << "Error:" << std::endl << "The program needs 3 arguments" << std::endl \
			<< std::endl << "Exemple:" << std::endl \
			<< "./replace [filename] [original] [to replace]" << std::endl;
	return EXIT_SUCCESS;
}
