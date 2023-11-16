/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:27:30 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/23 12:44:56 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

void	ft_leaks()
{
	system ("leaks -q serialization");
}

int	main()
{
	atexit(ft_leaks);
	Data*	test = new Data;
	Data*	recep;

	test->c = 30;
	test->s = "pepe";
	std::cout << test << std::endl;
	std::cout << Serializer::deserialize(Serializer::serialize(test)) << std::endl;
	recep = Serializer::deserialize(Serializer::serialize(test));
	std::cout << recep->c << std::endl;
	std::cout << recep->s << std::endl;
	delete test;
	return (EXIT_SUCCESS);
}
