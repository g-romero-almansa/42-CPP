/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:41:09 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/26 13:52:48 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	private:
		T			*ar;
		unsigned int _n;

	public:
		Array()
		{
			_n = 0;
			ar = new T();
		}
		Array(unsigned int n)
		{
			_n = n;
			ar = new T[_n];
		}
		~Array()
		{
			delete[] ar;
		}
		Array(const Array& cpy)
		{
			unsigned int i = -1;

			_n = cpy.size();
			ar = new T[cpy.size()];
			while (++i < cpy.size())
				ar[i] = cpy[i];
		}
		Array&	operator=(const Array& over)
		{
			unsigned int i = -1;
			
			_n = over.size();
			ar = new T[over.size()];
			while (++i < over.size())
				ar[i] = over[i];
			return (*this);
		}
		unsigned int	size() const
		{
			return (_n);
		}
		T&	operator[](int index) const
		{
			if (index < 0 || static_cast<unsigned int>(index) >= (size()))
				throw std::exception();
			return (ar[index]);
		}
};

#endif
