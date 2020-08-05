/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:29:46 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 14:42:51 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria *		clone( void ) const;
		virtual void			use( ICharacter & target );

	private:

};

#endif /* ****************************************************** CURE_CLASS_H */
