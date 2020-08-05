/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:46:36 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 11:46:36 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CPP
# define IMATERIASOURCE_CPP

# include "AMateria.Class.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void	 		learnMateria (AMateria * m ) = 0;
		virtual AMateria *		createMateria(std::string const & type) = 0;
};


#endif
