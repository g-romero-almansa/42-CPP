/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:47:24 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/02 10:53:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		std::string	const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat& operator=(const Bureaucrat& over);
		std::string getName() const;
		int		getGrade() const;
		void	doIncrement(int);
		void	doDecrement(int);
		void	signForm(const Form& f);

		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade Too High");
			}
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade Too Low");
			}
		};
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& over);

#endif
