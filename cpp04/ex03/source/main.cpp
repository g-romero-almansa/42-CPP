/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:11:45 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 15:02:36 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"

void	ft_leaks()
{
	system("leaks -q materia");
}

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout<<"---------------------> Subject Test <-----------------------"<<std::endl;
 	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

	 	Character mark("mark");
		tmp = src->createMateria("ice");
		mark.equip(tmp);
		Character foo(mark);
		foo.use(0, *bob);

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout<<"---------------------> Character & Materia full slots <-----------------------"<<std::endl;
 	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());

		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("water");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(3, *bob);
		me->use(7, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout<<"---------------------> Character & Materia Copy/assignment <-----------------------"<<std::endl;
	{
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());

		Character* alan = new Character("Alan");
		AMateria*	tmp;
		tmp = src->createMateria("ice");
		alan->equip(tmp);
		tmp = src->createMateria("cure");
		alan->equip(tmp);
		tmp = src->createMateria("ice");
		alan->equip(tmp);
		tmp = src->createMateria("water");
		alan->equip(tmp);

		MateriaSource	src_2;
		src_2 = *src;

		tmp = src_2.createMateria("cure");
		alan->equip(tmp);
		tmp = src_2.createMateria("cure");
		alan->equip(tmp);

		Character* mark = new Character(*alan);
		Character mike("mike");
		mike = *alan;
 		alan->use(0, *mark);
		alan->use(1, *mark);
		alan->use(3, *mark);
		alan->use(7, *mark);

		mike.use(1, *mark);

		delete mark;
		delete alan;
		delete src;
	}
	std::cout<<"---------------------> Ice & Cure <-----------------------"<<std::endl;
	{
		Ice	ptr;

		AMateria* qtr;
		qtr = ptr.clone();
		delete qtr;
	}
	atexit(ft_leaks);
	return (EXIT_SUCCESS);
}
