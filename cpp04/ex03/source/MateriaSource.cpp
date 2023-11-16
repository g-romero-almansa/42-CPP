/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:08:27 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 10:15:53 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = -1;
	
	while (++i < 4)
		mt[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	int		i = -1;
	
	while (++i < 4)
		if (mt[i])
			delete mt[i];
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	*this = cpy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& over)
{
	int		i = -1;

	while (++i < 4)
		mt[i] = over.mt[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	while (mt[i] && i < 4)
		i++;
	if (i < 4)
		mt[i] = m->clone();
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (0);
}
