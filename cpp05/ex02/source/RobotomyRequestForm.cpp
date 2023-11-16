/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:06:59 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/15 10:15:54 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm(_target, 72, 45), target(_target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy)
{
	target = cpy.target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& over)
{
	target = over.target;
	return (*this);
}

std::string	RobotomyRequestForm::getName() const
{
	return (target);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int		ramdom;
	
	if (getBool() == false || executor.getGrade() > getExecute())
		throw AForm::GradeTooLowException();
	ramdom = rand() % 100;
	if (ramdom % 2 == 0)
		std::cout << "* Drill noise " << getName() << " has been robotomized *" << std::endl;
	else
		std::cout << "* Drill noise " << getName() << " robotomized failed *" << std::endl;
}
