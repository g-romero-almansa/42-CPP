/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:17:10 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/10 12:10:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	name = "default name";
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string s) : ClapTrap(s + "_clap_name"), ScavTrap(s), FragTrap(s)
{
	name = s;
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap " << name << " constructor called " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy)
{
	*this = cpy;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& over)
{
	name = over.name;
	hit = over.hit;
	energy = over.energy;
	damage = over.damage;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << " and the other robot is " << ClapTrap::name << std::endl;
}
