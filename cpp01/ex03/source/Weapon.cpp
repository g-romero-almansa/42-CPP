/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:51:20 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/12 17:26:03 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string name)
{
	type = name;
}
