/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:54:24 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/14 17:13:35 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"INFO", "ERROR", "DEBUG", "WARNING"};
	void (Harl::*harlPtr[4])(void) = {&Harl::info, &Harl::error, &Harl::debug, &Harl::warning};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*harlPtr[i])();
			break ;	
		}
	}
	if (i == 4)
		std::cout << "Unknown level: " << level << std::endl;
}