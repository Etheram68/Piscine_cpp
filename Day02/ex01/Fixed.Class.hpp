/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 10:45:59 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/27 11:06:55 by frfrey           ###   ########lyon.fr   */
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
		Fixed( int const nbr );
		Fixed( float const nbr );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					_nbrFixed;
		static int const	_nbrBits;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif /* ***************************************************** FIXED_CLASS_H */
