/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:49:40 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/29 12:49:43 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*br;

	public:
		Cat();
		~Cat();
		Cat(const Cat& cpy);
		Cat&	operator=(const Cat& over);
		void	makeSound() const;
};

#endif
