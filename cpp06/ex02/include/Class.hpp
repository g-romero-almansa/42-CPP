/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:27 by gromero-          #+#    #+#             */
/*   Updated: 2023/08/24 11:43:51 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base(){}
};

class A : public Base
{
	public:
		~A(){}
};

class B : public Base
{
	public:
		~B(){}
};

class C : public Base
{
	public:
		~C(){}
};

#endif
