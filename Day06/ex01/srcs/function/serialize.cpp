/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:17:24 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 19:17:24 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <cstdlib>
#include "serialize.h"

void *			serialize(void)
{
	char *			serial = new char[16 + sizeof(int)];
	char			tab[] = "abcdefghizklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for(size_t i = 0; i < 8; i++)
		serial[i] = tab[static_cast<size_t>(rand()) % sizeof(tab)];
	*reinterpret_cast<int *>(serial + 8) = rand() % 100000;
	for(size_t i = 0; i < 8; i++)
		serial[i + 8 + sizeof(int)] = tab[static_cast<size_t>(rand()) % sizeof(tab)];
	return serial;
}
