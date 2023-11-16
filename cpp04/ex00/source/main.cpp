/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:37:58 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/31 12:54:19 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

void	ft_leaks()
{
	system ("leaks -q animals");
}

int main()
{
	std::cout<<"------------>Animal - Cat - Dog Class<--------------"<<std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout<<"------------>WrongAnimal - WrongCat Class<--------------"<<std::endl;
	{
		const WrongAnimal*	otrometa = new WrongAnimal();
		const WrongAnimal*	h = new WrongCat();
		const WrongCat*		c = new WrongCat();

		std::cout << h->getType() << " " << std::endl;
		h->makeSound();
		otrometa->makeSound();
		c->makeSound();
		delete c;
		delete h;
		delete otrometa;
	}
	atexit(ft_leaks);
	return (EXIT_SUCCESS);
}
