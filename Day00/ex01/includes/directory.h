/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:45:10 by frfrey            #+#    #+#             */
/*   Updated: 2020/06/30 09:45:10 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIRECTORY_H
# define DIRECTORY_H

# include <iostream>
# include <string>
# include "../srcs/add_user/ClassContact.hpp"

void			ft_print_prompt(void);
Contact			ft_add_user(void);
void			ft_search_user(Contact instance[8]);

#endif
