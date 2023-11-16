/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:37:50 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/30 14:30:16 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Span.hpp"

void	ft_leaks()
{
	system("leaks -q span");
}

int	main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(std::exception& e)
	{
		std::cout << "Too many numbers added!" << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	test(10);
	try
	{
		test.addmanyNumber(sp.getFirst(), sp.getLast());
		test.addmanyNumber(sp.getFirst(), sp.getLast());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		test.addmanyNumber(sp.getFirst(), sp.getLast());
	}
	catch(std::exception& e)
	{
		std::cout << "Too many numbers added!" << std::endl;
	}
	return (EXIT_SUCCESS);
}
