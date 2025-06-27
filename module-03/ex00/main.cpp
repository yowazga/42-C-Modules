/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:17:01 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/24 11:21:57 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("younes");

	claptrap.attack("Enemy1");
	claptrap.takeDamage(5);
	claptrap.beRepaird(3);
	claptrap.attack("Enemy2");
	claptrap.takeDamage(12);
	claptrap.beRepaird(8);
}