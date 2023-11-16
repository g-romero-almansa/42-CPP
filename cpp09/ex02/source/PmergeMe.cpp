/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:29:26 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/14 14:08:30 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char	**argv)
{
	int		i = 0;

	while (argv[++i])
	{
		checkPositive(std::atoi(argv[i]));
		d_s.push_back(std::atoi(argv[i]));
		v_s.push_back(std::atoi(argv[i]));
	}
}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& cpy)
{
	v_s = cpy.v_s;
	d_s = cpy.d_s;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& over)
{
	v_s = over.v_s;
	d_s = over.d_s;
	return (*this);
}

void	PmergeMe::checkPositive(int	n)
{
	if (n < 0)
		throw std::exception();
}

void	PmergeMe::showVector(std::string s)
{
	std::vector<int>::iterator	it = v_s.begin();

	std::cout << s;
	while (it != v_s.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void	PmergeMe::order(void)
{
	showVector("Before: ");
	struct timeval start;
	gettimeofday(&start, NULL);
	orderVector(0, v_s.size() - 1);
	struct timeval end;
	gettimeofday(&end, NULL);
	unsigned long  elapsed = (1000000 * end.tv_sec + end.tv_usec) - (1000000 * start.tv_sec + start.tv_usec);
	showVector("After: ");
	std::cout << "Time to process a range of " << v_s.size() << " elements with std::vector : " << elapsed << " us" << std::endl;
	gettimeofday(&start, NULL);
	orderDeque(0, d_s.size() - 1);
	gettimeofday(&end, NULL);
	elapsed = (1000000 * end.tv_sec + end.tv_usec) - (1000000 * start.tv_sec + start.tv_usec);
	std::cout << "Time to process a range of " << d_s.size() << " elements with std::deque : " << elapsed << " us" << std::endl;
}

void	PmergeMe::orderVector(int start, int end)
{
	int		mid;

	if (start < end)
	{	
		mid = (start + end) / 2;
		orderVector(start, mid);
		orderVector(mid + 1, end);
		mergeVector(start, mid, end);
	}	
}

void	PmergeMe::mergeVector(int start, int mid, int end)
{
	std::vector<int>	aux1;
	std::vector<int>	aux2;
	int					max1 = mid - start + 1;
	int					max2 = end - mid;
	int i = -1;
	while (++i < max1)
		aux1.push_back(v_s[start + i]);
	int	j = -1;
	while (++j < max2)
		aux2.push_back(v_s[mid + 1 +j]);
	int	k = start;
	i = 0;
	j = 0;
	while (i < max1 && j < max2)
	{
		if (aux1[i] < aux2[j])
			v_s[k] = aux1[i++];
		else
			v_s[k] = aux2[j++];
		k++;
	}
	while (i < max1)
	{
		v_s[k] = aux1[i];
		i++;
		k++;
	}
	while (j < max2)
	{
		v_s[k] = aux2[j];
		j++;
		k++;
	}
}

void	PmergeMe::orderDeque(int start, int end)
{
	int		mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		orderDeque(start, mid);
		orderDeque(mid + 1, end);
		mergeDeque(start, mid, end);
	}
}

void	PmergeMe::mergeDeque(int start, int mid, int end)
{
	std::deque<int>	aux1;
	std::deque<int>	aux2;
	int					max1 = mid - start + 1;
	int					max2 = end - mid;
	int i = -1;
	while (++i < max1)
		aux1.push_back(d_s[start + i]);
	int	j = -1;
	while (++j < max2)
		aux2.push_back(d_s[mid + 1 +j]);
	int	k = start;
	i = 0;
	j = 0;
	while (i < max1 && j < max2)
	{
		if (aux1[i] < aux2[j])
			d_s[k] = aux1[i++];
		else
			d_s[k] = aux2[j++];
		k++;
	}
	while (i < max1)
	{
		d_s[k] = aux1[i];
		i++;
		k++;
	}
	while (j < max2)
	{
		d_s[k] = aux2[j];
		j++;
		k++;
	}
}
