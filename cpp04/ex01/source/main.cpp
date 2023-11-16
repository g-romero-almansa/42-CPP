/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:55:44 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/14 12:20:12 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

void	ft_leaks()
{
	system ("leaks -q brain");
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	const	Animal	*x[10];
	int		k;

	k = -1;
	while (++k < 5)
		x[k] = new Dog();
	while (k < 10)
		x[k++] = new Cat();
	k = -1;
	while (++k < 10)
		delete x[k];
	std::cout<<"---------------------> First Test <-----------------------"<<std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		j->makeSound();
		i->makeSound();

		delete j;//should not create a leak
		delete i;
	}
	std::cout<<"---------------------> Array Cats and Dogs <-----------------------"<<std::endl;
	{
		const Animal* ptr[] = {new Dog(), new Dog(), new Cat(), new Cat()};
		int	i = 0;

		for (int i = 0; i < 4; i++)
		{
			std::cout<<"Animal in pos: "<<i<<" is a "<<ptr[i]->getType()<<std::endl;
			ptr[i]->makeSound();
		}
		while (i < 4)
		{
			std::cout<<"Animal "<<i<<std::endl;
			delete ptr[i];
			i++;
		}
	}
	std::cout<<"---------------------> Copy Test <-----------------------"<<std::endl;
	{
		Dog copy_example;
		Dog copy_aux(copy_example);

		std::cout<<"Type copy_aux: "<<copy_aux.getType()<<std::endl;
		copy_aux.makeSound();
	}
	std::cout<<"---------------------> Overload Test <-----------------------"<<std::endl;
	{
		Dog ovld_example;
		Dog ovld_aux = ovld_example;

		std::cout<<"Type ovld_example: "<<ovld_example.getType()<<std::endl;
		ovld_example.makeSound();
	}
	std::cout<<"---------------------> Last Test <-----------------------"<<std::endl;
	{
		Animal* ptr[] = {new Dog(), new Dog(), new Cat(), new Cat()};
		int	i = 0;

		ptr[0]->makeSound();
		ptr[2]->makeSound();
		*ptr[3] = *ptr[2];
		ptr[3]->makeSound();
		std::cout<<"ptr[3] is a "<<ptr[3]->getType()<<std::endl;
		while (i < 4)
		{
			std::cout<<"Animal "<<i<<std::endl;
			delete ptr[i];
			i++;
		}
	}
	atexit(ft_leaks);
	return (EXIT_SUCCESS);
}
