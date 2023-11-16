/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:07:11 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/07 15:26:46 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/AForm.hpp"

AForm::AForm() : name("default"), _signed(false), s_grade(150), x_grade(150)
{

}

AForm::AForm(std::string _name, int _s_grade, int _x_grade) : name(_name), _signed(false), s_grade(_s_grade), x_grade(_x_grade)
{
	std::cout << "AForm " << _name << " created" << std::endl;
	if (s_grade > 150 || x_grade > 150)
		throw GradeTooHighException();
	else if (s_grade < 1 || x_grade < 1)
		throw GradeTooLowException();
}

AForm::~AForm()
{

}

AForm::AForm(const AForm& cpy) : name(cpy.getName()), _signed(getBool()), s_grade(getSigned()), x_grade(getExecute())
{
	std::cout << "AForm " << name << " copied" << std::endl;
}

AForm&	AForm::operator=(const AForm& over)
{
	_signed = over.getBool();
	return (*this);
}

std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getBool() const
{
	return (_signed);
}

int		AForm::getSigned() const
{
	return (s_grade);
}

int		AForm::getExecute() const
{
	return (x_grade);
}

void	AForm::beSigned(const Bureaucrat& p)
{
	if (getSigned() > p.getGrade())
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, const AForm& f)
{
	if (f.getBool() == true)
		o << f.getName() << " is signed, " << f.getSigned() << " is the grade required to sign it and " << f.getExecute() << " to execute it." << std::endl;
	else
		o << f.getName() << " is not signed, " << f.getSigned() << " is the grade required to sign it and " << f.getExecute() << " to execute it." << std::endl;
	return (o);
}
