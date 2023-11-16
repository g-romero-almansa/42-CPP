/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:08:03 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 14:07:13 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy)
{
	(void)cpy;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& over)
{
	(void)over;
	return (*this);
}

int		ScalarConverter::checkDigit(std::string cast)
{
	int	i = -1;

	if (cast[0] == '-')
		i++;
	while (cast[++i])
		if (!isdigit(cast[i]) && cast[i] != '.' && cast[i] != 'f')
			return (1);
	return (0);
}

int		ScalarConverter::checkInt(std::string cast)
{
	double x = stod(cast);
	if (x > INT_MAX || x < INT_MIN)
		return (1);
	return (0);
}

int		ScalarConverter::checkString(std::string cast)
{
	int		p_cont = 0;
	int		f_cont = 0;
	int		i = -1;

	if (cast == "-inff" || cast == "+inff")
		return (0);
	while (cast[++i])
	{
		if (cast[i] == '.')
			p_cont++;
		else if (cast[i] == 'f')
			f_cont++;
	}
	if (p_cont > 1 || f_cont > 1)
		return (1);
	else
		return (0);
}

int		ScalarConverter::type(std::string cast)
{
	if (checkString(cast) == 1)
		return (0);
	else if (cast.length() == 1 && (isprint(cast[0]) && !isdigit(cast[0])))
		return (1);
	else if (!checkDigit(cast) && cast.find('.') == std::string::npos && cast.find('f') == std::string::npos)
		return (2);
	else if (!checkDigit(cast) && (cast.length() - 1) == cast.find('f') && cast.find('.') != std::string::npos
			&& isdigit(cast[cast.find('.') + 1]))
		return (3);
	else if (!checkDigit(cast) && cast.find('.') != std::string::npos && isdigit(cast[cast.find('.') + 1]))
		return (4);
	else if (cast == "-inff" || cast == "+inff" || cast == "nanf")
		return (3);
	else if (cast == "-inf" || cast == "+inf" || cast == "nan")
		return (4);
	return (0);
}

void	ScalarConverter::convert(std::string cast)
{
	int		i;

	i = type(cast);
	switch(i)
	{
		case 1:
			convertChar(cast, 1);
			break ;
		case 2:
			convertInt(cast, 1);
			break ;
		case 3:
			convertFloat(cast, 1);
			break ;
		case 4:
			convertDouble(cast, 1);
			break ;
		default :
			std::cout << "Wrong format!" << std::endl;
	}
}

void	ScalarConverter::convertChar(std::string cast, int _case)
{
	if (_case == 1)
	{
		std::cout << "char : " << cast[0] << std::endl;
		convertInt(cast, 2);
		convertFloat(cast, 2);
		convertDouble(cast, 2);
	}
	else if (_case == 2)
	{
		int x;

		if (checkInt(cast))
			x = -1;
		else
			x = stoi(cast);	
		if ((x < 32 && x >= 0) || x == 127)
			std::cout << "char : Non displayable" << std::endl;
		else if (x >= 32 && x <= 127)
			std::cout << "char : " << static_cast<char>(x) << std::endl;
		else
			std::cout << "char : impossible" << std::endl;
	}
	else if (_case == 3)
		std::cout << "char : impossible" << std::endl;
}

void	ScalarConverter::convertInt(std::string cast, int _case)
{
	if (_case == 1)
	{
		convertChar(cast, 2);
		if (checkInt(cast))
		{
			std::cout << "int : impossible" << std::endl;
			convertFloat(cast, 4);
			convertDouble(cast, 4);
		}
		else	
		{
			std::cout << "int : " << stoi(cast) << std::endl;
			convertFloat(cast, 3);
			convertDouble(cast, 3);
		}
	}
	else if (_case == 2)
		std::cout << "int : " << static_cast<int>(cast[0]) << std::endl;
	else if (_case == 3)
		std::cout << "int : " << static_cast<int>(stof(cast)) << std::endl;
	else if (_case == 4)
		std::cout << "int : " << static_cast<int>(stod(cast)) << std::endl;
	else if (_case == 5)
		std::cout << "int : impossible" << std::endl;
}

void	ScalarConverter::convertFloat(std::string cast, int _case)
{
	if (_case == 1)
	{
		if (cast == "nanf" || cast == "+inff" || cast == "-inff")
		{
			convertChar(cast, 3);
			convertInt(cast, 5);
		}
		else
		{
			convertChar(cast, 2);
			if (checkInt(cast))
				convertInt(cast, 5);
			else
				convertInt(cast, 3);
		}
		if (cast[cast.find('.') + 1] == '0' && cast[cast.find('.') + 2] == 'f')
		{
			std::cout << "float : " << stof(cast) << ".0f" << std::endl;
			convertDouble(cast, 4);
		}
		else
		{
			std::cout << "float : " << stof(cast) << "f" << std::endl;
			convertDouble(cast, 5);
		}
	}
	if (_case == 2)
		std::cout << "float : " << static_cast<float>(cast[0]) << ".0f" << std::endl;
	else if (_case == 3)
		std::cout << "float : " << static_cast<float>(stoi(cast)) << ".0f" << std::endl;
	else if (_case == 4)
		std::cout << "float : " << static_cast<float>(stod(cast)) << ".0f" << std::endl;
	else if (_case == 5)
		std::cout << "float : " << static_cast<float>(stod(cast)) << "f" << std::endl;
}

void	ScalarConverter::convertDouble(std::string cast, int _case)
{
	if (_case == 1)
	{
		if (cast == "nan" || cast == "+inf" || cast == "-inf")
		{
			convertChar(cast, 3);
			convertInt(cast, 5);
		}
		else
		{
			convertChar(cast, 2);
			if (checkInt(cast))
				convertInt(cast, 5);
			else
				convertInt(cast, 4);
		}
		if (cast[cast.length() - 1] == '0')
		{
			convertFloat(cast, 4);
			std::cout << "double : " << stod(cast) << ".0" << std::endl;
		}
		else
		{
			convertFloat(cast, 5);
			std::cout << "double : " << stod(cast) << std::endl;
		}
	}
	if (_case == 2)
		std::cout << "double : " << static_cast<double>(cast[0]) << ".0" << std::endl;
	else if (_case == 3)
		std::cout << "double : " << static_cast<double>(stoi(cast)) << ".0" << std::endl;
	else if (_case == 4)
		std::cout << "double : " << static_cast<double>(stof(cast)) << ".0" << std::endl;
	else if (_case == 5)
		std::cout << "double : " << static_cast<double>(stof(cast)) << std::endl;
}
