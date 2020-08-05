/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:49:01 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/05 12:03:00 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.Class.hpp"
# include "Ice.Class.hpp"
# include "Cure.Class.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();

		MateriaSource &			operator=( MateriaSource const & rhs );

		virtual void			learnMateria( AMateria * m );
		virtual AMateria *		createMateria( std::string const & type );

	private:

		AMateria *				_inv[4];
		int						_i;

};

#endif /* ********************************************* MATERIASOURCE_CLASS_H */
