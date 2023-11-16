/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:44:57 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 10:53:23 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << " constructor called " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy)
{
	*this = cpy;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& over)
{
	name = over.name;
	hit = over.hit;
	energy = over.energy;
	damage = over.damage;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " high fives you!" << std::endl;
}
