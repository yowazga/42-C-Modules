/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:25:42 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/21 12:30:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}
Serializer::Serializer(const Serializer&) {}
Serializer& Serializer::operator=(const Serializer&) {return *this;}
Serializer::~Serializer(void) {}

uintptr_t Serializer::serialize(Data* ptr) 
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}