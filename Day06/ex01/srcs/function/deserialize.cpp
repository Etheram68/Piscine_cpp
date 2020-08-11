/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:17:56 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 19:17:56 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.h"

Data *				deserialize(void * raw)
{
	Data *		deserialize = new Data();

	char *c = reinterpret_cast<char *>(raw);
	deserialize->s1 = std::string(c, 8);
	deserialize->n = *reinterpret_cast<int *>(c + 8);
	deserialize->s2 = std::string(c + 8 + sizeof(int), 8);
	return deserialize;
}

