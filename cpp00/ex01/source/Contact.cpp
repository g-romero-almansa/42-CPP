/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:11:34 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/12 16:52:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PhoneBook.hpp"

void	Contact::show_all()
{
	std::cout << this->f_name << std::endl;
	std::cout << this->l_name << std::endl;
	std::cout << this->nick << std::endl;
	std::cout << this->phone << std::endl;
	std::cout << this->secrect << std::endl;
}

void	Contact::add_fname(std::string s)
{
	this->f_name = s;
}

void	Contact::show_fname()
{
	if (this->f_name.length() <= 10)
	{
		int		space;
		int		total;
		int		i;

		space = 10 - this->f_name.length();
		total = 10 - space;
		std::cout << std::setw(space + 1);
		i = -1;
		while (--total >= 0)
			std::cout << this->f_name[++i];
	}
	else
	{
		int		i;

		i = -1;
		while (++i < 9)
			std::cout << this->f_name[i];
		std::cout << ".";
	}
	std::cout << "|";
}

void	Contact::add_lname(std::string s)
{
	this->l_name = s;
}

void	Contact::show_lname()
{
	if (this->l_name.length() <= 10)
	{
		int		space;
		int		total;
		int		i;

		space = 10 - this->l_name.length();
		total = 10 - space;
		std::cout << std::setw(space + 1);
		i = -1;
		while (--total >= 0)
			std::cout << this->l_name[++i];
	}
	else
	{
		int		i;

		i = -1;
		while (++i < 9)
			std::cout << this->l_name[i];
		std::cout << ".";
	}
	std::cout << "|";
}
void	Contact::add_nick(std::string s)
{
	this->nick = s;
}

void	Contact::show_nick()
{
	if (this->nick.length() <= 10)
	{
		int		space;
		int		total;
		int		i;

		space = 10 - this->nick.length();
		total = 10 - space;
		std::cout << std::setw(space + 1);
		i = -1;
		while (--total >= 0)
			std::cout << this->nick[++i];
	}
	else
	{
		int		i;

		i = -1;
		while (++i < 9)
			std::cout << this->nick[i];
		std::cout << ".";
	}
	std::cout << "|";
}

void	Contact::add_phone(int x)
{
	this->phone = x;
}

void	Contact::show_phone()
{
	std::cout << this->phone << std::endl;
}

void	Contact::add_secrect(std::string s)
{
	this->secrect = s;
}

void	Contact::show_secrect()
{
	std::cout << this->secrect << std::endl;
}
