/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:13:56 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 10:42:52 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Point.hpp"

Point::Point() : x(Fixed()) , y(Fixed())
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float a, const float b) : x(Fixed(a)) , y(Fixed(b))
{
	//std::cout << "Float constructor called" << std::endl;
}

Point::~Point()
{
	//std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point& cpy) : x(cpy.x) , y(cpy.y)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(const Point& over)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->x = over.x;
	this->y = over.y;
	return (*this);
}

Point	Point::operator-(const Point& b)
{
	Point	tpm;

	tpm.x = this->x - b.x;
	tpm.y = this->y - b.y;
	return (tpm);
}

Fixed	Point::getX() const
{
	return (x);
}

Fixed	Point::getY() const
{
	return (y);
}
