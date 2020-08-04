/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:23:41 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 14:23:41 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:

		virtual ~ISpaceMarine() {};

		virtual void				battleCry() const = 0;
		virtual void				rangedAttack() const = 0;
		virtual void				meleeAttack() const = 0;

		virtual ISpaceMarine*		clone() const = 0;
};

#endif
