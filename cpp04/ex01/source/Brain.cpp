/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:03:14 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/13 16:53:17 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Brain.hpp"

Brain::Brain()
{
	int		i;

	i = -1;
	while (++i <= 100)
		ideas[i] = "a";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	*this = cpy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& over)
{
	int		i;

	i = -1;
	while (++i <= 100)
		ideas[i] = over.ideas[i];
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	Brain::showIdeas()
{
	int		i;

	i = -1;
	while(++i <= 100)
		std::cout << ideas[i] << std::endl;
}
