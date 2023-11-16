/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:53:17 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/12 17:25:19 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/HumanB.hpp"

HumanB::HumanB(std::string p_name) : name(p_name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &club)
{
	cub = &club;
}
void	HumanB::attack()
{
	std::cout << name << " attacks with their " << cub->getType() << std::endl;
}
