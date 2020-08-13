/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 09:26:23 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 09:26:23 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
class Array
{
	public:

		Array() : _array(NULL), _n(0){}
		Array( unsigned int n ) : _array(new T[n]), _n(n) {}
		Array( Array const & src ) : _n(src._n)
		{
			_array = new T[src._n];
			for (size_t i = 0; i < src._n; i++)
				_array[i] = src._array[i];
		}

		~Array()
		{
			if (this->_array != NULL)
				delete [] this->_array;
		}

		Array &		operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new T[rhs._n];
				for (size_t i = 0; i < rhs._n; i++)
					_array[i] = rhs._array[i];
				_n = rhs._n;
			}
			return *this;
		}

		T &			operator[]( size_t i ) const
		{
			if (!this->_array || i < 0 || i >= this->_n)
				throw std::exception();
			return this->_array[i];
		}

		unsigned int		size( void ) const
		{
			return this->_n;
		}

	private:

		T *				_array;
		unsigned int	_n;
};

