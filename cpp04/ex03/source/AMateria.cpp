/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:20:13 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/13 10:42:18 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const& type) : tp(type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}

AMateria&	AMateria::operator=(const AMateria& over)
{
	tp = over.tp;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (tp);
}

void	AMateria::use(ICharacter& target)
{
	target.getName();
}
