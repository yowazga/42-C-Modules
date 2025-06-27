/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:40:37 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/21 15:32:36 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base {
	public :
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void identify(Base* p);
void identify(Base& p);