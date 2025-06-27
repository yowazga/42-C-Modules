/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:37:28 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/12 15:43:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon; // Use a pointer to Weapon, as HumanB may not always have a Weapon

	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &newWeapon);
		void attack() const;
};

#endif