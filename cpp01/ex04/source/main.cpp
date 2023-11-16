/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:01:19 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/13 10:43:30 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong number of arguments" << std::endl;
	else
		replace(argv[1], argv[2], argv[3]);
	return (EXIT_SUCCESS);
}
