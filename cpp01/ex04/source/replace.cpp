/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:43:47 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/14 09:58:56 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Replace.hpp"

void	replace(std::string file, std::string search, std::string repla)
{
	std::ifstream	_rfile;
	std::ofstream	_wfile;
	std::string		s;
	std::size_t		pos;

	_rfile.open(file);
	pos = file.find('.');
	if (pos != std::string::npos)
		file.erase(pos, file.length() - pos);
	s = file + ".replace";
	_wfile.open(s);
	if (_rfile.is_open())
	{
		while (getline(_rfile, s, '\n'))
		{
			pos = s.find(search);
			while (pos != std::string::npos)
			{
				s.erase(pos, search.length());
				s.insert(pos, repla);
				pos = s.find(search);
			}
			_wfile << s <<  std::endl;
		}
	}
	else
		std::cout << "Can't open the file" << std::endl;
}
