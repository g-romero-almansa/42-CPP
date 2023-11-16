/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:54:09 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 15:43:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class	ScalarConverter
{
	private:	
		ScalarConverter();
	public:
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& cpy);
		ScalarConverter& operator=(const ScalarConverter& over);
		static int	checkDigit(std::string);
		static int	checkInt(std::string);
		static int	checkString(std::string);
		static int	type(std::string);
		static void convert(std::string);
		static void	convertChar(std::string, int);
		static void	convertInt(std::string, int);
		static void	convertFloat(std::string, int);
		static void	convertDouble(std::string, int);
};

#endif
