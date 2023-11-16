/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:32:49 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 11:34:30 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ScavTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default name";
	hit = 10;
	energy = 10;
	damage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string s)
{
	name = s;
	hit = 10;
	energy = 10;
	damage = 0;
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	*this = cpy;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& over)
{
	name = over.name;
	hit = over.hit;
	energy = over.energy;
	damage = over.damage;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit > 0)
	{
		if (energy > 0)
			std::cout << "ClapTrap " << name << " attacks " << target << " causing " << damage << " points of damage!" << std::endl;
		else
			std::cout << "ClapTrap " << name << " is out of energy(" << energy << ") it can't attack" << std::endl;
		if (energy > 0)
			energy--;
	}
	else
		std::cout << "ClapTrap " << name <<  " can't attack because he is dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit <= 0)
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
	else
	{
		hit -= amount;
		if (hit <= 0)
			std::cout << "ClapTrap " << name << " has taken " << amount << " damage and is dead" << std::endl;
		else
			std::cout << "ClapTrap " << name << " has taken " << amount << " damage(" << hit << " left)" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit > 0)
	{
		energy -= amount;
		if (energy <= 0)
			std::cout << "Can't repair that amount, no energy(" << energy + amount << ") left" << std::endl;
		else
		{
			hit += amount;
			std::cout << "ClapTrap " << name << " has " << hit << " hit points and " << energy << " energy left" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << name << " can't be repaired because he is dead" << std::endl;
}
