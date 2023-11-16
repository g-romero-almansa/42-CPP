/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:41:43 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/19 14:01:17 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PhoneBook.hpp"

void menu()
{
    std::cout << "Enter one of the following commands" << std::endl;
	std::cout << "|---------------------------------|" << std::endl;
	std::cout << "|ADD                              |" << std::endl;
	std::cout << "|---------------------------------|" << std::endl;
    std::cout << "|SEARCH                           |" << std::endl;
	std::cout << "|---------------------------------|" << std::endl;
    std::cout << "|EXIT                             |" << std::endl;
	std::cout << "|---------------------------------|" << std::endl;

}

int	main(int argc, char **argv)
{
	PhoneBook	agenda;
	std::string	input;
	(void)argv;

	if (argc != 1)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return(EXIT_SUCCESS);
	}
	while (input != "EXIT")
	{
		menu();
		std::cout << ">";
		std::cin >> input;
		std::cin.ignore();
		if (input[0] == '\0')
			 input = "EXIT";
		if (input.compare("ADD") && input.compare("SEARCH") && input.compare("EXIT"))
			std::cout << "Invalid command, please enter a valid one." << std::endl;
		if (input == "ADD") 
			agenda.add_contact();
		if (!input.compare("SEARCH"))
			agenda.show_contact();
	}
	return(EXIT_SUCCESS);
}
