/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:18:55 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 19:18:55 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

# include <string>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

struct	Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

Data *				deserialize(void * raw);
void *				serialize(void);

#endif
