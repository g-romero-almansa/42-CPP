/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:13 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/05 10:19:49 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <iomanip>

class	Contact
{
	private:
		std::string	f_name;
		std::string l_name;
		std::string	nick;
		int			phone;
		std::string secrect;

	public:
		void	show_all();
		void	add_fname(std::string s);
		void	show_fname(void);
		void	add_lname(std::string s);
		void	show_lname();
		void	add_nick(std::string s);
		void	show_nick();
		void	add_phone(int x);
		void	show_phone();
		void	add_secrect(std::string s);
		void	show_secrect();
};

#endif
