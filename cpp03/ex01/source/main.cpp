/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:33:32 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 10:34:28 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ScavTrap.hpp"

int	main()
{
	ScavTrap	p;
	ScavTrap	t("pepe");
	ScavTrap	cpy(t);

	t.guardGate();
	t.takeDamage(200);
	p.attack("ale");
	p.guardGate();
	p.takeDamage(50);
	p.beRepaired(30);
	cpy.takeDamage(100);
	cpy.attack("juan");
	cpy.beRepaired(20);
	cpy.guardGate();
	return (EXIT_SUCCESS);
}
