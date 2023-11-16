/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:28:41 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/22 09:44:45 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int		i;

	Zombie *zombie = new Zombie[N];
	i = -1;
	while (++i < N)
		zombie[i].setname(name);
	return (zombie);
}
