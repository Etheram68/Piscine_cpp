/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:29:39 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 14:42:55 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		virtual ~Ice();

		Ice &					operator=( Ice const & rhs );

		virtual AMateria *		clone( void ) const;
		virtual void			use( ICharacter & target );

	private:

};

#endif /* ******************************************************* ICE_CLASS_H */
