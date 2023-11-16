/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:55:42 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/19 15:28:46 by gromero-         ###   ########.fr       */
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
		Fixed&		operator=(const Fixed& over);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& over);

#endif
