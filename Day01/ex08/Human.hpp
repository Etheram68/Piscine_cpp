/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 17:30:20 by frfrey            #+#    #+#             */
/*   Updated: 2020/07/17 17:30:20 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>

class Human
{
	public:

	void		action( std::string const & action_name, std::string const & target );

	private:

	void		meleeAttack( std::string const & target );
	void		rangedAttack( std::string const & target );
	void		intimidatingShout( std::string const & target );
};

#endif
