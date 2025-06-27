/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:35:35 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/09 14:31:13 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		void announce() const;
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif