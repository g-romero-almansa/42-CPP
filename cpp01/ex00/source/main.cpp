/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:31:05 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/22 09:36:23 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Zombie.hpp"

int	main()
{
	std::string input;

	std::cout << "Creating the first zombie : ";
	std::cin >> input;
	Zombie zombie1(input);
	zombie1.announce();
	std::cout << "Creating the second zombie : ";
	std::cin >> input;
	Zombie *zombie2 = newZombie(input);
	zombie2->announce();
	std::cout << "Creating the third zombie : ";
	std::cin >> input;
	randomChump(input);
	delete zombie2;
	return (EXIT_SUCCESS);
}
