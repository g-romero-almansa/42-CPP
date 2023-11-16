/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:58:19 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/15 11:48:15 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					integer;
		static const int	fractional = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed&	operator=(const Fixed& over);
		int getRawBits(void) const;
		void setRawBits (int const raw);
};

#endif
