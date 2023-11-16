/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:49:56 by gromero-          #+#    #+#             */
/*   Updated: 2023/09/26 10:50:22 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class	RPN
{
	private:
		std::stack<int>	stack;

	public:
		RPN();
		RPN(std::string);
		~RPN();
		RPN(const RPN& cpy);
		RPN&	operator=(const RPN& over);
		void	operation(char c);
		void	getTop(void);
};

#endif
