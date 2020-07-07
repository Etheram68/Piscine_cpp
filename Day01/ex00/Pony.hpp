/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:07:25 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 10:07:25 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:

	Pony(std::string name, std::string breed, int price);
	~Pony();
	void		describe( void ) const;
	bool		isFree( void ) const;

	private:

	std::string		name;
	std::string		breed;
	int				price;
	bool			free;
};

#endif
