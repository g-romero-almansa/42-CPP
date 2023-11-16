/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:21:39 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/14 10:40:27 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 5), target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm(_target, 25, 5), target(_target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy)
{
	target = cpy.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& over)
{
	target = over.target;
	return (*this);
}

std::string	PresidentialPardonForm::getName() const
{
	return (target);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (getBool() == false || executor.getGrade() > getExecute())
		throw AForm::GradeTooLowException();
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
