/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:38:54 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/30 14:27:27 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Span.hpp"

Span::Span() : n(0)
{

}

Span::Span(unsigned int _n) : n(_n)
{

}

Span::~Span()
{

}

Span::Span(const Span& cpy)
{
	n = cpy.n;
	vec = cpy.vec;
}

Span&	Span::operator=(const Span& over)
{
	n = over.n;
	vec = over.vec;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (vec.size() < n)
		vec.push_back(number);
	else
		throw std::exception();
}

int		Span::shortestSpan(void)
{
	Span	cpy(*this);

	if (vec.size() <= 1)
		throw std::exception();
	sort(cpy.vec.begin(), cpy.vec.end());
	adjacent_difference(cpy.vec.begin(), cpy.vec.end(), cpy.vec.begin());
	return (*min_element(cpy.vec.begin() + 1, cpy.vec.end()));
}

int		Span::longestSpan(void)
{
	if (vec.size() <= 1)
		throw std::exception();
	return (*max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end()));
}

std::vector<int>::iterator Span::getFirst()
{
	return (vec.begin());
}

std::vector<int>::iterator Span::getLast()
{
	return (vec.end());
}

void	Span::addmanyNumber(std::vector<int>::iterator f, std::vector<int>::iterator l)
{
	vec.insert(vec.end(), f, l);
	if (vec.size() > n)
		throw std::exception();

}
