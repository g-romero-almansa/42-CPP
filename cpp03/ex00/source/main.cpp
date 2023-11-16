/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:26:13 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/21 17:08:24 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ClapTrap.hpp"

int	main()
{
	ClapTrap a;
	ClapTrap b("king");
	ClapTrap c(a);

	c = b;
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.attack("queen");
	c.takeDamage(8);
	c.beRepaired(0);
	a.attack("prince");
	a.takeDamage(12);
	a.beRepaired(20);
	b.attack("orus");
	b.takeDamage(5);
	b.beRepaired(3);
	return (EXIT_SUCCESS);
}
