/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:24:04 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/08 12:43:02 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setname(std::string);
};

Zombie* zombieHorde(int N, std::string name);

#endif
