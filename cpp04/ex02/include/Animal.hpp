/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:48:21 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/05 11:00:22 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();

	public:
		virtual ~Animal();
		Animal(const Animal& cpy);
		Animal&		operator=(const Animal& over);
		virtual void		makeSound() const = 0;
		std::string	getType() const;
};

#endif
