/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:07:29 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/15 10:20:31 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

void	ft_leaks()
{
	system("leaks -q Intern");
}

int	main()
{
	atexit(ft_leaks);
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		Bureaucrat	x1("Yannis", 1);
		
		rrf->beSigned(x1);	
		x1.executeForm(*rrf);
		std::cout << std::endl;
		delete rrf;
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
