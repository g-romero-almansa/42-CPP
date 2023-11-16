/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:30:42 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/30 14:26:08 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>

class	Span
{
	private:
		unsigned int		n;
		std::vector<int>	vec;

	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(const Span& cpy);
		Span& operator=(const Span& over);
		void	addNumber(int);
		int		shortestSpan(void);
		int		longestSpan(void);
		std::vector<int>::iterator getFirst(void);
		std::vector<int>::iterator getLast(void);
		void	addmanyNumber(std::vector<int>::iterator, std::vector<int>::iterator);
};

#endif
