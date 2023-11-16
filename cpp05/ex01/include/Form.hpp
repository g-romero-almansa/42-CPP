/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:48:52 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/02 10:52:50 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string const 	name;
		bool				_signed;
		int	const			s_grade;
		int	const			x_grade;

	public:
		Form();
		Form(std::string , int, int);
		~Form();
		Form(const Form& cpy);
		Form& operator=(const Form& over);
		std::string getName() const;
		bool	getBool() const;
		int		getSigned() const;
		int		getExecute() const;
		void	beSigned(const Bureaucrat& p);

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

std::ostream&	operator<<(std::ostream& o, const Form& f);

#endif
