/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:53:15 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/29 10:53:28 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

Animal::Animal()
{
	type = "Angmar";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	*this = cpy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& over)
{
	type = over.type;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << type << " makes a sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
