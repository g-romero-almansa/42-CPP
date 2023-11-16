/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:35:46 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 14:52:13 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
T	min(T a, T b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T	max(T a, T b)
{
	if (b >= a)
		return (b);
	else
		return (a);
}

#endif
