/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:14:36 by gromero-          #+#    #+#             */
/*   Updated: 2023/09/25 16:22:19 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error" << std::endl;
	else
	{
		try
		{
			RPN		test(argv[1]);

			test.getTop();
		}
		catch(std::exception& e)
		{
			std::cout << "Error" << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}
