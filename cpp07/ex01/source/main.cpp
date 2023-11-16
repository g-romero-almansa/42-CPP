/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:23:46 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/29 13:54:51 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/iter.hpp"

void	ft_leaks()
{
	system ("leaks -q iter");
}

int	main()
{
	int		array[10] = {1, 12, 2443, 554, 5, 6 ,7, 8, 9, 10};
	float	array2[10] = {1.23f, 512.21f, 125.f, 1422.f, 1.0f, 10.0f, 87.0f, 172.8f, 172.1111f, 3.3f};
	std::string	list[2] = {"pepe", "juan"};

	std::cout << "INT ARRAY" << std::endl;	
	iter(array, 10, f);
	std::cout << "FLOAT ARRAY" << std::endl;
	iter(array2, 10, f);
	std::cout << "STRING ARRAY" << std::endl;
	iter(list, 2, f);
	return (EXIT_SUCCESS);
}
