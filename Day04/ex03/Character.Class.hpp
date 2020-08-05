/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:05:31 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:14:30 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

		Character( std::string const & name );
		Character( Character const & src );
		virtual ~Character();

		Character &							operator=( Character const & rhs );

		virtual std::string const &			getName( void ) const;
		virtual void						equip( AMateria * m );
		virtual void						unequip( int idx );
		virtual void						use( int idx, ICharacter & target );

	private:

		Character();

		AMateria *							_inv[4];
		std::string							_name;
		int									_i;

};


#endif /* ************************************************* CHARACTER_CLASS_H */
