/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:29:31 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/02 15:18:04 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <vector>
# include <sys/time.h>

class PmergeMe
{
	private:
		std::vector<int>	v_s;
		std::deque<int>		d_s;

	public:
		PmergeMe();
		PmergeMe(char **argv);
		~PmergeMe();
		PmergeMe(const PmergeMe& cpy);
		PmergeMe&	operator=(const PmergeMe& over);
		void		checkPositive(int);
		void		showVector(std::string);
		void		order(void);
		void		orderVector(int, int);
		void		orderDeque(int, int);
		void		mergeDeque(int, int, int);
		void		mergeVector(int, int, int);
};

#endif
