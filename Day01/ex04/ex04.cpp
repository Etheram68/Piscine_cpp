/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:42:42 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 15:42:42 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int			main()
{
	std::string			str("HI THIS IS BRAIN");
	std::string*		strPtr = &str;
	std::string&		strRef = str;

	std::cout << "Value in ptr \"" << *strPtr << "\"" << std::endl
		<< "Value in Ref \"" << strRef << "\"" << std::endl;
}
