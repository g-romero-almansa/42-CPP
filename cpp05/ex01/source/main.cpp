/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:48:23 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/02 11:20:24 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Bureaucrat.hpp"

void	ft_leaks()
{
	system("leaks -q form");
}

int	main()
{
	atexit(ft_leaks);
	try
	{
		Bureaucrat	x1("Pepe", 1);
		Form		x2("Blackmail", 150, 150);
		
		x2.beSigned(x1);
		x1.signForm(x2);
		std::cout << x2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	z1("Jesus", 120);
		Form		z2("Panama Paper", 1, 1);
		
		z1.signForm(z2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Bureaucrat	y1("Jose Luis", 120);
		Form		y2("Zapata Papers", 119, 119);
		Form		y3(y2);

		y1.signForm(y3);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
