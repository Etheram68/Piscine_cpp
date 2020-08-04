/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:41:40 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 11:47:40 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

# include <iostream>
# include <string>
# include "Enemy.Class.hpp"

class SuperMutant : public Enemy
{

	public:

		SuperMutant();
		SuperMutant( SuperMutant const & src );
		~SuperMutant();

		SuperMutant &		operator=( SuperMutant const & rhs );

		virtual void		takeDamage( int damage );

	private:

};

#endif /* *********************************************** SUPERMUTANT_CLASS_H */
