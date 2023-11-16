/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:10:01 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 15:42:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Class.hpp"

Base*	generate(void)
{
	int ramdom = rand() % 3;
	Base	*test = NULL;

	switch(ramdom)
	{
		case 0:
			test = new A;
			break ;
		case 1:
			test = new B;
			break ;
		case 2:
			test = new C;
			break ;
	}
	return (test);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;

}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(std::bad_cast)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(std::bad_cast)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(std::bad_cast)
	{
	}
}

void	ft_leaks()
{
	system ("leaks -q real_type");
}

int main()
{
	atexit(ft_leaks);
	int i = -1;
	Base* test[15];
	while (++i < 15)
	{
		test[i] = generate();
		identify(test[i]);
		identify(*test[i]);
		delete test[i];
	}
	return (EXIT_SUCCESS);
}
