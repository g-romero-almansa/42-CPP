/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:20:53 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/14 11:40:01 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& cpy)
{
	(void)cpy;
}

Intern& Intern::operator=(const Intern& over)
{
	(void)over;
	return (*this);
}

AForm*	Intern::makeForm(std::string type, std::string target)
{
	std::string options[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int			i;

	i = 0;
	while (i < 3 && options[i] != type)
		i++;
	if (i != 3)
		std::cout << "Intern creates " << type << std::endl;
	switch(i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
			break ;
		case 1:
			return (new PresidentialPardonForm(target));
			break ;
		case 2:
			return (new ShrubberyCreationForm(target));
			break ;
		default:
			std::cout << "Wrong form name!!" << std::endl;
			return (NULL);
	}
}
