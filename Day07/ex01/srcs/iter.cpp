/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 19:33:24 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/12 19:33:24 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

template < typename T >
void		iter(T *arr, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template < typename T >
void		print(T const & src)
{
	std::cout << src << " ";
}

int			main()
{
	int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	iter(arr, 10, print);
	std::cout << std::endl;

	std::string		arr1[5] = {"Salut", "Comment vas tu ?", "Bien", "Ok", "A plus"};
	iter(arr1, 5, print);
	std::cout << std::endl;

	double	arr2[5] = {1.32, 2.56, 12.56, 24.58, 42.42};
	iter(arr2, 5, print);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
