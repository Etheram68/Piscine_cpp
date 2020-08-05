/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:51:29 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 14:40:46 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include <iostream>
# include <string>
# include "Victim.Class.hpp"

class Peon : public Victim
{

	public:

		Peon( std:: string name );
		Peon( Peon const & src );
		virtual ~Peon();

		virtual void		getPolymorphed( void ) const;

	private:

		Peon();

};

#endif /* ****************************************************** PEON_CLASS_H */
