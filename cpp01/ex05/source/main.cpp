/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:46:16 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/14 11:00:34 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Harl.hpp"

int	main()
{
	Harl		t;
	std::string	s;

	while (s.compare("exit") && s.compare("EXIT"))
	{
		std::cout << "Enter one of the followings levels: debug, info, warning, error." << std::endl << ">";
		std::getline(std::cin, s, '\n');
		if (s[0] == '\0')
			return (EXIT_FAILURE);
		t.complain(s);
	}
	return (EXIT_SUCCESS);
}
