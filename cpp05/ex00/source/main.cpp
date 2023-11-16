/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:00:50 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/31 14:22:37 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Bureaucrat.hpp"

void	ft_leaks()
{
	system("leaks -q bureaucrat");
}

int	main()
{
	try
	{
		Bureaucrat f("pepe", 120);
		f.doIncrement(121);
		Bureaucrat p("jesus", 12222);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat p("jesus", 12222);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat g("luis", 120);
		Bureaucrat x(g);
		g.doDecrement(30);
		g.doDecrement(1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	atexit(ft_leaks);
	return (EXIT_SUCCESS);
}
