/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:36:25 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/02 15:31:54 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> 				map;
		std::map<std::string, double>:: iterator	it;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cpy);
		BitcoinExchange& operator=(const BitcoinExchange& over);
		void compareCsv(std::string);
};

#endif
