/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:47:49 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/02 10:24:53 by gromero-         ###   ########.fr       */
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

void	Bureaucrat::signForm(const Form& f)
{
	if (f.getBool() == true)
		std::cout << getName() << " signed " << f.getName() << std::endl;
	else
	{
		std::cout << getName() << " couldn't sign " << f.getName() << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& over)
{
	o << over.getName() << ", bureaucrat grade " << over.getGrade();
	return (o);
}
