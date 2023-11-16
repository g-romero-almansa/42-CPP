/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:07:39 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/23 10:24:33 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x) : integer(x << fractional)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float x) : integer(std::roundf(x * (1 << fractional)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed&	Fixed::operator=(const Fixed& over)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->integer = over.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& y)
{
	if (integer > y.integer)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& y)
{
	if (integer < y.integer)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed& y)
{
	if (integer >= y.integer)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& y)
{
	if (integer <= y.integer)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed& y)
{
	if (integer == y.integer)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& y)
{
	if (integer != y.integer)
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(const Fixed& x)
{
	Fixed cpy(this->toFloat() + x.toFloat());
	return (cpy);
}

Fixed	Fixed::operator-(const Fixed& x)
{
	Fixed cpy(this->toFloat() - x.toFloat());
	return (cpy);
}

Fixed	Fixed::operator*(const Fixed& x)
{
	Fixed cpy(this->toFloat() * x.toFloat());
	return (cpy);
}

Fixed	Fixed::operator/(const Fixed& x)
{
	Fixed cpy(this->toFloat() / x.toFloat());
	return (cpy);
}

Fixed&	Fixed::operator++()
{
	integer++;
	return (*this);
}

Fixed	Fixed::operator++(int x)
{
	Fixed cpy(*this);
	integer++;
	return (cpy);
}

Fixed&	Fixed::operator--()
{
	integer--;
	return (*this);
}

Fixed	Fixed::operator--(int x)
{
	Fixed cpy(*this);
	integer--;
	return (cpy);
}

Fixed&	Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

const	Fixed&	Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() > y.getRawBits())
		return (x);
	else
		return (y);
}

Fixed&	Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

const	Fixed&	Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	else
		return (y);
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
