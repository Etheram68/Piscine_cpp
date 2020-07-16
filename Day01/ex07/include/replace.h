/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:34:41 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/15 17:34:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

void			ft_openfile( char *av[] );
void			ft_readfile( std::ifstream& file, char *av[]);
void			ft_change_occurence( std::string const & buf, char *av[] );

#endif
