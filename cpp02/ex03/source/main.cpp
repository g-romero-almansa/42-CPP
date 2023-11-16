/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:21:06 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/26 11:26:05 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Point.hpp"

int	main()
{
	const	Point	a(0.5f, 0.5f);
	const	Point	b(10.5f, 30.f);
	const	Point	c(20.5f, 0.5f);
	const	Point	point(10.0f, 0.5f);
	const	Point	point2(0.5f, 0.5f);
	const	Point	point3(10.0f, 15.0f);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is outside the triangle!" << std::endl;
	if (bsp(a, b, c, point2) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is outside the triangle!" << std::endl;
	if (bsp(a, b, c, point3) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is outside the triangle!" << std::endl;
	return  (EXIT_SUCCESS);
}
