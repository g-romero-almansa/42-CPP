/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:07:30 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/14 11:25:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	t;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (EXIT_FAILURE);
	}
	t.complain(argv[1]);
	return (EXIT_SUCCESS);
}
