/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:08:57 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/28 13:00:44 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void	easyfind(T container, int n)
{
	if (std::find(container.begin(), container.end(), n) != container.end())
		std::cout << "The number is in the container" << std::endl;
	else
		throw std::exception();
}

#endif
