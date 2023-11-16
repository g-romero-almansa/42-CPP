/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:50:11 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/29 12:50:23 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*br;

	public:
		Dog();
		~Dog();
		Dog(const Dog& cpy);
		Dog&	operator=(const Dog& over);
		void	makeSound() const;
};

#endif
