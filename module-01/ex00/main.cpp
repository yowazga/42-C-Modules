/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:48:10 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/10 10:30:31 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z1;

	z1 = newZombie("Zombie1");
	z1->announce();
	randomChump("RandomZombie");

	delete z1;
}