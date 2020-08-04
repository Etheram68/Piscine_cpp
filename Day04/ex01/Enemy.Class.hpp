/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:30:05 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:20:44 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy( int hp, std::string const & type );
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &					operator=( Enemy const & rhs );

		std::string const		getType() const;
		int						getHP() const;
		virtual void			takeDamage( int damage );

	protected:

		std::string				_type;
		int						_hp;

	private:

		Enemy();

};

#endif /* ***************************************************** ENEMY_CLASS_H */
