/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:58:51 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/12 15:44:14 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}
