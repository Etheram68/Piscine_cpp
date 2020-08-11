/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:49:04 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/11 15:49:38 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>

class Converter
{

	public:

		class		NoConversionException : public std::exception
		{
			public :

				NoConversionException();
				virtual ~NoConversionException() throw();

				virtual char const			*what( void ) const throw();
		};

		Converter( std::string const &str );
		Converter( Converter const & src );
		~Converter();

		Converter &		operator=( Converter const & rhs );

		operator 		char( void ) const;
		operator 		int( void ) const;
		operator 		float( void )const;
		operator 		double( void ) const;


	private:

		Converter();

		std::string		_str;
		mutable bool	_char;

};

#endif /* ******************************************************* CONVERTER_H */
