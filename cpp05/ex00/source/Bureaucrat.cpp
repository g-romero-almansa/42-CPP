/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:02:17 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/31 14:22:18 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{

}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	std::cout << "Bureaucrat " << _name << " created" << std::endl;
	if (grade > 150)	
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : name(cpy.getName())
{
	std::cout << "Bureaucrat " << name << " copied" << std::endl;
	grade = cpy.grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& over)
{
	grade = over.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int		Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::doIncrement(int x)
{
	if (grade - x > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade - x < 1)
		throw Bureaucrat::GradeTooLowException();
	grade -= x;
}

void	Bureaucrat::doDecrement(int x)
{
	if (grade + x > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade + x < 1)
		throw Bureaucrat::GradeTooLowException();
	grade += x;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& over)
{
	o << over.getName() << ", bureaucrat grade " << over.getGrade();
	return (o);
}
