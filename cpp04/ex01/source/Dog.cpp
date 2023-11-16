/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:54:09 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 12:04:48 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	br = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete br;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
	br = new Brain();
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& over)
{
	type = over.type;
	br = over.br;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Guaguau!" << std::endl;
}
