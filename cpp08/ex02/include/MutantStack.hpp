/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:01:28 by gromero-          #+#    #+#             */
/*   Updated: 2023/09/01 10:37:41 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <stack>
# include <iostream>

template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack& cpy)
		{
			this->c = cpy.c;
		}
		MutantStack& operator=(const MutantStack& over)
		{
			this->c = over.c;
			return (*this);
		}
		typedef typename container::iterator iterator;
		iterator begin(void){return (this->c.begin());}
		iterator end(void){return (this->c.end());}
};

#endif
