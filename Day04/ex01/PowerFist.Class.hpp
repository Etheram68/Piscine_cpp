/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:26:11 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:27:02 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

# include <iostream>
# include <string>
# include "AWeapon.Class.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

		virtual void	attack( void ) const;

	private:

};

#endif /* ************************************************* POWERFIST_CLASS_H */
