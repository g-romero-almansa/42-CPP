/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:52:06 by gromero-          #+#    #+#             */
/*   Updated: 2023/11/14 13:41:43 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(std::string data)
{
	std::ifstream	file;
	std::size_t		pos;
	std::string		s;
	std::string		aux;
	double			x;

	file.open(data);
	if (file.is_open())
	{
		std::getline(file, s);
		while (std::getline(file, s))
		{
			pos = s.find(',');
			if (pos == std::string::npos)
				throw std::exception();
			aux = s.substr(0, pos);
			x = atof(s.substr(pos + 1, s.length()).c_str());
			map[aux] = x;
		}
		file.close();
	}
	else
		throw std::exception();
		//std::cout << "Can't open the csv" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cpy)
{
	map = cpy.map;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& over)
{
	map = over.map;
	return (*this);
}

void	BitcoinExchange::compareCsv(std::string db)
{
	std::ifstream	file;
	std::size_t		pos;
	std::string		s;
	std::string		aux;
	double			x;

	file.open(db);
	if (file.is_open())
	{
		std::getline(file, s);
		while (std::getline(file, s))
		{
			try
			{
				if ((pos = s.find('|')) == std::string::npos)
					std::cout << "Error: bad input => " << s << std::endl;
				else if (std::atof(&s[5]) > 12 || std::atof(&s[5]) < 0 || std::atof(&s[8]) < 0 || std::atof(&s[8]) > 31)
					std::cout << "Error: wrong date!" << std::endl;
				else
				{
					aux = s.substr(0, pos - 1);
					x = atof(s.substr(pos + 1, s.length()).c_str());
					if (x < 0)
						std::cout << "Error: not a positive number." << std::endl;
					else if (x > 1000)
						std::cout << "Error: too large number." << std::endl;
					else
					{
						it = map.find(aux);
						if (it != map.end())
							std::cout << aux << " => " << x << " = " << it->second * x << std::endl;
						else
						{
							it = map.lower_bound(aux);
							it--;
							std::cout << aux << " => " << x << " = " << it->second * x << std::endl;
						}
					}
				}
			}
			catch(std::exception& e)
			{
				std::cout << "Error: not a number." << std::endl;
			}
		}
		file.close();
	}
	else
	{
		std::cout << "Can't open the input" << std::endl;
	}
}
