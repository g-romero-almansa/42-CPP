/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:46:15 by gromero-          #+#    #+#             */
/*   Updated: 2023/07/12 11:52:11 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*mt[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource&	operator=(const MateriaSource& over);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
