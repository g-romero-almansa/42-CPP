/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:03:16 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 15:40:53 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer& cpy);
		Serializer& operator=(const Serializer& over);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
