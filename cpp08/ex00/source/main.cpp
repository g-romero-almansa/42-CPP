/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:17:52 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/28 13:06:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/easyfind.hpp"

void	ft_leaks()
{
	system ("leaks -q easy_find");
}

int	main()
{
	std::vector<int> vec;
	int		i = -1;
	while (++i < 10)
		vec.push_back(i);
	try
	{
		easyfind(vec, 9);
	}
	catch(std::exception& e)
	{
		std::cout << "Number not found" << std::endl;
	}	
	return (EXIT_SUCCESS);
}
