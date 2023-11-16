/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:16:48 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 12:17:01 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/DiamondTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap " << name << " constructor called " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
	*this = cpy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& over)
{
	name = over.name;
	hit = over.hit;
	energy = over.energy;
	damage = over.damage;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (hit > 0)
	{
		if (energy > 0)
			std::cout << "ScavTrap " << name << " attacks " << target << " causing " << damage << " points of damage!" << std::endl;
		else
			std::cout << "ScavTrap " << name << " is out of energy(" << energy << ") it can't attack" << std::endl;
		if (energy > 0)
			energy--;
	}
	else
		std::cout << "ScavTrap " << name <<  " can't attack because he is dead" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (hit > 0)
		std::cout << "ScavTrap " << name << " is on keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << name << " can't be on keeper mode because he is dead" << std::endl;
}
