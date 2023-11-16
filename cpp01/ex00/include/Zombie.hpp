/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:26:50 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/22 09:39:18 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
