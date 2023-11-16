/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:37:45 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 10:40:44 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
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
