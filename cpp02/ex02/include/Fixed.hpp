/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:31:59 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/23 09:58:41 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					integer;
		static const int	fractional = 8;

	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		~Fixed();
		Fixed(const Fixed& cpy);
		Fixed&			operator=(const Fixed& over);
		bool			operator>(const Fixed& y);
		bool			operator<(const Fixed& y);
		bool			operator>=(const Fixed& y);
		bool			operator<=(const Fixed& y);
		bool			operator==(const Fixed& y);
		bool			operator!=(const Fixed& y);
		Fixed			operator+(const Fixed& x);
		Fixed			operator-(const Fixed& x);
		Fixed			operator*(const Fixed& x);
		Fixed			operator/(const Fixed& x);
		Fixed&			operator++();
		Fixed			operator++(int x);
		Fixed&			operator--();
		Fixed			operator--(int x);
		static			Fixed&	max(Fixed& x, Fixed& y);
		static	const	Fixed&	max(const Fixed& x, const Fixed& y);
		static			Fixed&	min(Fixed& x, Fixed& y);
		static	const	Fixed&	min(const Fixed& x, const Fixed& y);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& over);

#endif
