/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:07:29 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/15 10:17:16 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void	ft_leaks()
{
	system("leaks -q 28B");
}

int	main()
{
	atexit(ft_leaks);
	try
	{
		Bureaucrat	x1("Yannis", 1);
		ShrubberyCreationForm x2("Test");
		
		x2.beSigned(x1);	
		x1.executeForm(x2);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	x3("Juan", 1);
		RobotomyRequestForm x4("Test2");

		x4.beSigned(x3);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		x3.executeForm(x4);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	x5("Marcos", 1);
		PresidentialPardonForm x6("Test3");

		x6.beSigned(x5);
		x5.executeForm(x6);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
