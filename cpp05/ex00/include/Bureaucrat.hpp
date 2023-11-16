/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:53:08 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/25 10:29:23 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
