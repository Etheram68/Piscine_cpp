/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:20:31 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:20:38 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:

		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria &				operator=( AMateria const & rhs );

		std::string const &		getType( void ) const;
		void					setType( std::string const & type );
		unsigned int			getXP( void ) const;
		void					setXP( unsigned int xp);

		virtual AMateria *		clone( void ) const = 0;
		virtual void			use( ICharacter & target ) = 0;

	private:

		AMateria();

		unsigned int			_xp;
		std::string				_type;

};

#endif /* ************************************************** AMATERIA_CLASS_H */
