/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:46:09 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/24 14:31:36 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

	private:
		int					_nbrFixed;
		static int const	nbrBits;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif /* ***************************************************** FIXED_CLASS_H */
