/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:31:16 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 15:00:58 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Character.hpp"

Character::Character() : name("Pepe")
{
	int		i = -1;

	while (++i < 4)
		mt[i] = NULL;
}

Character::Character(const std::string s) : name(s)
{
	int		i = -1;

	while (++i < 4)
		mt[i] = NULL;
}

Character::~Character()
{
	int		i = -1;
	
	while (++i < 4)
		if (mt[i])
			delete mt[i];
}

Character::Character(const Character& cpy) : name(cpy.name)
{
	int		i = -1;

	*this = cpy;
	while (++i < 4)
	{
		if (mt[i])
			mt[i] = cpy.mt[i]->clone();
		else
			mt[i] = NULL;
	}
}

Character&	Character::operator=(const Character& over)
{
	int		i = -1;

	name = over.name;	
	while (++i < 4)
	{
		if (mt[i])
			mt[i] = over.mt[i];
		else
			mt[i] = NULL;
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	int		i = 0;

	while (i < 4 && mt[i])
		i++;
	if (i < 4 && m)
		mt[i] = m->clone();
	delete m;
}

void	Character::unequip(int idx)
{
	if (mt[idx])
		delete mt[idx];
	mt[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && mt[idx])
		mt[idx]->use(target);
}
