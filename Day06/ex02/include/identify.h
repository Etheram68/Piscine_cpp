/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 09:16:11 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/12 09:16:11 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
# define IDENTIFY_H

class Base
{
	public:
		virtual ~Base() {};
};
class A : public Base {};

class B : public Base {};

class C : public Base {};

void		identify_from_pointer(Base * p);
void		identify_from_reference(Base & p);

#endif
