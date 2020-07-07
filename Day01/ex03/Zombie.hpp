/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:02:49 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/07 11:02:49 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:

	Zombie();
	~Zombie();
	void		advert( void ) const;
	void		setName( std::string str );
	void		setType( std::string str );

	private:

	std::string		_name;
	std::string		_type;
};

#endif
