/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:56:56 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/14 13:41:53 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/BitcoinExchange.hpp"

int	main(int argc, char	**argv)
{
	if (argc != 2)
		std::cout << "Wrong number of arguments!" << std::endl;
	else
	{
		try
		{
			BitcoinExchange	p("data.csv");
			p.compareCsv(argv[1]);
		}
		catch(std::exception& e)
		{
			std::cout << "Error" << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}
