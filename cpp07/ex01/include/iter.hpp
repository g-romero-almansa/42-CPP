/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:54:58 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/29 13:54:57 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* a, int l, void(*f)(T x))
{
	int	i = -1;
	while (++i < l)
		f(a[i]);
}

template <typename T>
void	f(T x)
{
	std::cout << x << std::endl;
}

#endif
