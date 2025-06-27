/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:35 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/16 12:27:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = &newWeapon;
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else 
        std::cout << name << " attacks with their" << std::endl;
    
}