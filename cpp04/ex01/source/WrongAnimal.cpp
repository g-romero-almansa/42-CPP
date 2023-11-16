/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:54:41 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/29 10:54:58 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/WrongCat.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Periquito";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	*this = cpy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& over)
{
	type = over.type;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " makes a sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
