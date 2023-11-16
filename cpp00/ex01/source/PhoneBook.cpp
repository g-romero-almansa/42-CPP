/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:11:01 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/12 16:39:58 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PhoneBook.hpp"

void	PhoneBook::add_contact()
{
	static int	i = 0;
	std::string s;

	if (i == 8)
	{
		i = 0;
		std::cout << "Replacing older contact" << std::endl;
	}
	std::cout << "Enter first name" << std::endl << ">";
	std::getline (std::cin, s, '\n');
	while (s[0] == '\0')
	{
		std::cout << "Field can`t be empty" << std::endl << ">";
		std::getline (std::cin, s, '\n');
	}
	this->contact[i].add_fname(s);
	std::cout << "Enter last name" << std::endl << ">";
	std::getline (std::cin, s, '\n');
	while (s[0] == '\0')
	{
		std::cout << "Field can`t be empty" << std::endl << ">";
		std::getline (std::cin, s, '\n');
	}
	this->contact[i].add_lname(s);
	std::cout << "Enter nickname" << std::endl << ">";
	std::getline (std::cin, s, '\n');
	while (s[0] == '\0')
	{
		std::cout << "Field can`t be empty" << std::endl << ">";
		std::getline (std::cin, s, '\n');
	}
	this->contact[i].add_nick(s);
	std::cout << "Enter phone number" << std::endl << ">";
	std::getline (std::cin, s, '\n');
	while (is_digit(s) == 0 || s.length() > 9 || s[0] == '\0')
	{
		std::cout << "Enter numeric values" << std::endl << ">";
		std::getline (std::cin, s, '\n');
	}
	this->contact[i].add_phone(stoi(s));
	std::cout << "Enter your darkest secrect" << std::endl << ">";
	std::getline (std::cin, s, '\n');
	while (s[0] == '\0')
	{
		std::cout << "Field can`t be empty" << std::endl << ">";
		std::getline (std::cin, s, '\n');
	}
	this->contact[i].add_secrect(s);
	i++;
	if (this->n_contact != 8)
		this->n_contact = i;
}

int	PhoneBook::is_digit(std::string s)
{
	int		i;

	i = -1;
   while (s[++i])
	   if (std::isdigit(s[i]) == 0)
		   return 0;
   return (1);
}

void	PhoneBook::show_contact()
{
	std::string s;
	int			i;

	i = -1;
	if (this->n_contact > 0)
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	else
		std::cout << "No contact added yet" << std::endl;
	while (++i < this->n_contact)
	{
		std::cout << "|         " << i << "|";
		this->contact[i].show_fname();
		this->contact[i].show_lname();
		this->contact[i].show_nick();
		std::cout << std::endl;
	}
	if (this->n_contact > 0)
	{
		std::cout << "Enter the contact index" << std::endl;
		std::cin >> s;
		while (is_digit(s) == 0)
		{
			std::cout << "Enter numeric value" << std::endl << ">";
			std::cin >> s;
		}
		if (stoi(s) < this->n_contact)
			this->contact[stoi(s)].show_all();
	}
}
