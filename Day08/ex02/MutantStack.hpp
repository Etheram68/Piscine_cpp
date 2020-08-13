/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:54:07 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 17:32:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack() : std::stack<T>() {}
		MutantStack( MutantStack const & src ) { *this = src; }
		virtual ~MutantStack() {}

		MutantStack &		operator=( MutantStack const & rhs )
		{
			_mutant = rhs._mutant;
		}

		typedef typename std::list<T>::iterator iterator;

		iterator		begin( void ) { return _mutant.begin(); }
		iterator		end( void ) { return _mutant.end(); }

		bool			empty( void ) { return _mutant.empty(); }
		size_t			size( void ) { return _mutant.size(); }
		void			push( T x ) { _mutant.push_front(x); }
		void			pop( void ) { _mutant.pop_front(); }
		T				top( void ) { return _mutant.front(); }

	private:

		std::list<T> _mutant;

};

#endif /* ****************************************************** MUTANSTACK_H */
