/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:15:01 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/14 11:37:14 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(const Intern& cpy);
		Intern& operator=(const Intern& over);
		AForm*	makeForm(std::string, std::string);
};

#endif
