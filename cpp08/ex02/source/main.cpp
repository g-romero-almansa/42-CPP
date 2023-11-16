/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:57:23 by gromero-          #+#    #+#             */
/*   Updated: 2023/09/01 10:35:33 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/MutantStack.hpp"
#include <vector>

void	ft_leaks()
{
	system("leaks -q mutated_abomination");
}

int main()
{
	atexit(ft_leaks);

	MutantStack<int> mstack;
	
	std::cout << "**STACK**" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "**ITERATOR CHECK**" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::vector<int> l;
	std::cout << "**VECTOR**" << std::endl;
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	
	std::cout << "**ITERATOR CHECK**" << std::endl;
	std::vector<int>::iterator it2 = l.begin();
	std::vector<int>::iterator ite2 = l.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}
	std::vector<int> p(l);
	return (EXIT_SUCCESS);
}
