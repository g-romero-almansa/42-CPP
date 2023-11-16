/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:21:05 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 15:40:12 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ScalarConverter.hpp"

void	ft_leaks()
{
	system("leaks -q convert");
}

int	main(int argc, char **argv)
{
	atexit(ft_leaks);
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!!" << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(argv[1]);
	return (EXIT_SUCCESS);
}
