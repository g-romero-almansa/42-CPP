/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:06:05 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/07 15:21:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		std::string const 	name;
		bool				_signed;
		int	const			s_grade;
		int	const			x_grade;

	public:
		AForm();
		AForm(std::string , int, int);
		virtual ~AForm();
		AForm(const AForm& cpy);
		AForm& operator=(const AForm& over);
		std::string getName() const;
		bool			getBool() const;
		int				getSigned() const;
		int				getExecute() const;
		void			beSigned(const Bureaucrat& p);
		virtual void	execute(const Bureaucrat& executor) const = 0;

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

std::ostream&	operator<<(std::ostream& o, const AForm& f);

#endif
