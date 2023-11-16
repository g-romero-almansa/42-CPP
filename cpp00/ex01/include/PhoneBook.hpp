/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:43:33 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/05 10:23:03 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook
{
	private:	
		Contact	contact[8];
		int		n_contact;
	
	public:
		void	add_contact();
		void	show_contact();
		int		is_digit(std::string s);
};

#endif
