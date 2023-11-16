/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:14:27 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/12 11:44:49 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	tp;

	public:
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();
		AMateria(const AMateria& cpy);
		AMateria&	operator=(const AMateria& over);
		std::string const& getType() const;
		virtual	AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
