/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:31:57 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/20 10:47:38 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x) : integer(x << fractional)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float x) : integer(std::roundf(x * (1 << fractional)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed&	Fixed::operator=(const Fixed& over)
{
	std::cout << "Assignation operator called" << std::endl;
	integer = over.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (integer);
}

void	Fixed::setRawBits(int const raw)
{
	integer = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(integer) / (1 << fractional));
}

int		Fixed::toInt(void) const
{
	return (integer >> 8);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& over)
{
	o << over.toFloat();
	return (o);
}
