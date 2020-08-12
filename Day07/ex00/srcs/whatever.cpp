/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:48:29 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/12 18:48:29 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

template < typename T >
void			swap(T & lhs, T & rhs)
{
	T	tmp;

	tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template < typename T >
T const &		min(T const & lhs, T const & rhs)
{
	return (lhs < rhs) ? lhs : rhs;
}

template < typename T >
T const &		max(T const & lhs, T const & rhs)
{
	return (lhs > rhs) ? lhs : rhs;
}

template <>
std::string const &
	min<std::string>(std::string const & lhs, std::string const & rhs)
{
	return (lhs.size() < rhs.size()) ? lhs : rhs;
}

template <>
std::string const &
	max<std::string>(std::string const & lhs, std::string const & rhs)
{
	return (lhs.size() > rhs.size()) ? lhs : rhs;
}

int			main()
{
	int		a(42), b(42), c(10);

	std::cout << "Before Swap: " << a << " " << c << std::endl;
	swap(a, c);
	std::cout << "after Swap: " << a << " "  << c << std::endl;
	swap(c, a);

	std::cout << "Min: " << ::min(a, b) << " " << ::min(a, c) << " " << ::min(c, a)
		<< std::endl;
	std::cout << "Max: " << ::max(a, b) << " " << ::max(a, c) << " " << ::max(c, a)
		<< std::endl;

	std::cout << "Min: " << ::min(10.50, 10.54) << " " << ::min(8700, 5)
		<< std::endl;
	std::cout << "Max: " << ::max(10.50, 10.54) << " " << ::max(8700, 5)
		<< std::endl;

	std::string		d("souris"), e("test");

	std::cout << "Min: " << ::min(d, e) << std::endl;
	std::cout << "Max: " << ::max(d, e) << std::endl;
	return EXIT_SUCCESS;
}
