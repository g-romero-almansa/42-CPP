/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:13:33 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/21 15:31:54 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit;
		int			energy;
		int			damage;

	public:
		ClapTrap();
		ClapTrap(std::string s);
		~ClapTrap();
		ClapTrap(const ClapTrap& cpy);
		ClapTrap&	operator=(const ClapTrap& over);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
