/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:26:08 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/16 12:20:03 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
			  << "I think I deserve to have some extra bacon for free.\n"
			  << "I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string leveles[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	for (int i = 0 ; i < 4; i++)
	{
		if (level == leveles[i])
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}