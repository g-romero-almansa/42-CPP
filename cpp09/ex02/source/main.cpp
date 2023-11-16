/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:31:56 by gromero-          #+#    #+#             */
/*   Updated: 2023/09/26 14:10:17 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Enter numbers pls!" << std::endl;
	try
	{
		PmergeMe	test(argv);

		test.order();
	}
	catch(std::exception& e)
	{
		std::cout << "Error" << std::endl;
	}
	return (EXIT_SUCCESS);
}
