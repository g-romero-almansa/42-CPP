/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:34:32 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/23 10:01:24 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(7.5f);
	Fixed c(12.25f);
	Fixed d(25);
	Fixed e;
	Fixed  const f(Fixed(5.05f) * Fixed(2));
	Fixed  const g(Fixed(13.3f) / Fixed(3));

	if (d > b)
		std::cout << d << " > " << b << std::endl;
	if (c < b)
		std::cout << c << " < " << b << std::endl;
	if (d >= b)
		std::cout << d << " >= " << b << std::endl;
	if (c <= b)
		std::cout << c << " <= " << b << std::endl;
	if (c == b)
		std::cout << c << " == " << b << std::endl;
	if (c != b)
		std::cout << c << " != " << b << std::endl;
	
	e = b + c;
	std::cout << std::endl << e << std::endl;
	e = b - c;
	std::cout << e << std::endl;
	e = b * c;
	std::cout << e << std::endl;
	e = b / c;
	std::cout << e << std::endl << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << f << std::endl;
	std::cout << Fixed::max(f, g) << std::endl;
	std::cout << Fixed::min(f, g) << std::endl;
	return (EXIT_SUCCESS);
}
