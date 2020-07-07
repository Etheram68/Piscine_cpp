/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:16:07 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 16:16:07 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>

# include "Brain.hpp"

class Human
{
	public:

	Human();
	const Brain		&getBrain() const;
	std::string		identify( void ) const;

	private:

	const Brain		_brain;
};

#endif
