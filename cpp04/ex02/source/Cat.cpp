/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:52:37 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 12:23:56 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	br = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete br;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
	br = new Brain();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& over)
{
	type = over.type;
	br = over.br;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);}

void	Cat::makeSound() const
{
	std::cout << "Miauuu!" << std::endl;
}
