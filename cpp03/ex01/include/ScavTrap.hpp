/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:42:32 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 12:41:33 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string s);
		~ScavTrap();
		ScavTrap(const ScavTrap& cpy);
		ScavTrap&	operator=(const ScavTrap& over);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
