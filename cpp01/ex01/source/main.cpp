/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:36:06 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/22 10:17:10 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Zombie.hpp"

int	main()
{
	int	i;

	Zombie *zombie = zombieHorde(4, "a");
	i = -1;
	while (++i < 4)
		zombie[i].announce();
	delete [] zombie;
	return (EXIT_SUCCESS);
}
