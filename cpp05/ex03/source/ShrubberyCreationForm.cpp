/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:59:54 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/07 16:04:44 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137), target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm(_target, 145, 137), target(_target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy)
{
	target = cpy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& over)
{
	target = over.target;
	return (*this);	
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (getBool() == false || executor.getGrade() > getExecute())
		throw AForm::GradeTooLowException();
	std::ofstream	_wfile;
	_wfile.open(target + "_shrubbery");
	_wfile << "       ###" << std::endl;
	_wfile << "      #o###" << std::endl;
	_wfile << "    #####o###" << std::endl;
	_wfile << "   #o###|#/###" << std::endl;
	_wfile << "    ####|/#o#" << std::endl;
	_wfile << "     # }|{ #" << std::endl;
	_wfile << "       }|{" << std::endl;
	_wfile.close();
}
