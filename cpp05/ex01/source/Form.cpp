/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:25:10 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/02 10:54:00 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Form.hpp"

Form::Form() : name("default"), _signed(false), s_grade(150), x_grade(150)
{

}

Form::Form(std::string _name, int _s_grade, int _x_grade) : name(_name), _signed(false), s_grade(_s_grade), x_grade(_x_grade)
{
	std::cout << "Form " << _name << " created" << std::endl;
	if (s_grade > 150 || x_grade > 150)
		throw GradeTooHighException();
	else if (s_grade < 1 || x_grade < 1)
		throw GradeTooLowException();
}

Form::~Form()
{

}

Form::Form(const Form& cpy) : name(cpy.getName()), _signed(getBool()), s_grade(getSigned()), x_grade(getExecute())
{
	std::cout << "Form " << name << " copied" << std::endl;
}

Form&	Form::operator=(const Form& over)
{
	_signed = over.getBool();
	return (*this);
}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getBool() const
{
	return (_signed);
}

int		Form::getSigned() const
{
	return (s_grade);
}

int		Form::getExecute() const
{
	return (x_grade);
}

void	Form::beSigned(const Bureaucrat& p)
{
	if (getSigned() > p.getGrade())
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, const Form& f)
{
	if (f.getBool() == true)
		o << f.getName() << " is signed, " << f.getSigned() << " is the grade required to sign it and " << f.getExecute() << " to execute it." << std::endl;
	else
		o << f.getName() << " is not signed, " << f.getSigned() << " is the grade required to sign it and " << f.getExecute() << " to execute it." << std::endl;
	return (o);
}
