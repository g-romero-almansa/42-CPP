/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:53:59 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 10:57:25 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/FragTrap.hpp"

int	main()
{
	FragTrap	p;
	FragTrap	t("king");
	FragTrap	cpy(t);

	t.highFivesGuys();
	t.takeDamage(200);
	p.attack("ale");
	p.highFivesGuys();
	p.takeDamage(50);
	p.beRepaired(30);
	cpy.takeDamage(100);
	cpy.attack("juan");
	cpy.beRepaired(20);
	cpy.highFivesGuys();
	return (EXIT_SUCCESS);
}
