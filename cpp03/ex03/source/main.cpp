/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:22:12 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/10 12:21:36 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/DiamondTrap.hpp"

int	main()
{
	DiamondTrap	p("king");
	DiamondTrap b("queen");
	DiamondTrap c(b);

	p.attack("pepe");
	p.takeDamage(200);
	p.beRepaired(30);
	p.whoAmI();
	b.takeDamage(1000);
	b.whoAmI();
	c.whoAmI();
	c.attack("hola");
	return (EXIT_SUCCESS);
}
