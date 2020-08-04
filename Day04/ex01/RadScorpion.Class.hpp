/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:47:08 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:49:40 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

# include <iostream>
# include <string>
# include "Enemy.Class.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion();
		RadScorpion( RadScorpion const & src );
		~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );

	private:

};


#endif /* *********************************************** RADSCORPION_CLASS_H */
