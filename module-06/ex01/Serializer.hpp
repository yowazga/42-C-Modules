/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:20:08 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/22 16:59:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer(void);
	public:
		Serializer(const Serializer&);
		Serializer& operator=(const Serializer&);
		~Serializer(void);
		
		static uintptr_t serialize(Data*);
		static Data* deserialize(uintptr_t);
};

