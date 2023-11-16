/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:02:02 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/27 12:12:11 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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
