/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:33:34 by gromero-          #+#    #+#             */
/*   Updated: 2023/06/22 10:19:54 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;
	std::cout << &s << ">>" << s << std::endl;
	std::cout << stringPTR << ">>" << *stringPTR << std::endl;
	std::cout << &stringREF << ">>" << stringREF << std::endl;
	return (EXIT_SUCCESS);
}
