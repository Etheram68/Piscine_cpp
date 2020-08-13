/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:29:29 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 14:29:29 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

template < typename T >
int			easyfind(T & src, int n)
{
	typename T::iterator	it = std::find(src.begin(), src.end(), n);

	if (it == src.end())
		throw std::runtime_error("couldn't find");
	return *it;
}

#endif
