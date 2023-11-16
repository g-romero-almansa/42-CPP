/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:12:38 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 11:25:35 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Point.hpp"

Fixed	area(const Point& a, const Point& b, const Point& c)
{
	return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0f);
}
bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	Fixed	A;
	Fixed	A1;
	Fixed	A2;
	Fixed	A3;

	A = area(a, b, c);
	if (A < 0.f)
		A = A * -1;
	A1 = area(point, b, c);
	if (A1 < 0.f)
		A1 = A1 * -1;
	A2 = area(a, point, c);
	if (A2 < 0.f)
		A2 = A2 * -1;
	A3 = area(a, b, point);
	if (A3 < 0.f)
		A3 = A3 * -1;
	if ((A1 + A2 + A3) == A && A1 != 0 && A2 != 0 && A3 != 0)
		return (true);
	else
		return (false);
}
