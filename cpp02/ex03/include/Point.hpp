/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:08:53 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 10:42:47 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed	x;
		Fixed	y;

	public:
		Point();
		Point(const float a, const float b);
		~Point();
		Point(const Point& cpy);
		Point&	operator=(const Point& over);
		Point	operator-(const Point& b);
		Fixed	getX() const;
		Fixed	getY() const;
};

Fixed	area(const Point& a, const Point& b, const Point& c);

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point);

#endif
