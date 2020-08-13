/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:48:51 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 15:46:28 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	public:

		Span( unsigned int const n );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		int			shortestSpan( void );
		int			longestSpan( void );
		void		addNumber( int n );

	private:

		Span();

		unsigned int		_n;
		std::vector<int>	_tab;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
