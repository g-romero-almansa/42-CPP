/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:01:10 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/16 13:50:54 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(std::string s)
{
	unsigned long	i = 0;

	while (i < s.length())
	{
		if (isdigit(s[i]))
		{
			if (std::atoi(&s[i]) > 9)
				throw std::exception();
			stack.push(std::atoi(&s[i]));
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			operation(s[i]);
		i++;
	}
	if (stack.size() > 1)
		throw std::exception();
}

RPN::~RPN()
{

}

RPN::RPN(const RPN& cpy)
{
	stack = cpy.stack;
}

RPN&	RPN::operator=(const RPN& over)
{
	stack = over.stack;
	return (*this);
}

void	RPN::operation(char	c)
{
	int	temp = 0;

	if (stack.size() < 2)
		throw std::exception();
	switch(c)
		{
			case '+':
				{
					temp = stack.top();
					stack.pop();
					temp += stack.top();
					stack.pop();
					stack.push(temp);
				}
				break ;
			case '-':
				{
					temp = stack.top();
					stack.pop();
					temp = stack.top() - temp;
					stack.pop();
					stack.push(temp);
				}
				break ;
			case '/':
				{
					temp = stack.top();
					if (temp == 0)
						throw std::exception();
					stack.pop();
					temp = stack.top() / temp;
					stack.pop();
					stack.push(temp);	
				}
				break ;
			case '*':
				{
					temp = stack.top();
					stack.pop();
					temp *= stack.top();
					stack.pop();
					stack.push(temp);
				}
				break ;
			default:
				throw std::exception();
		}
}

void	RPN::getTop(void)
{
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
}
