/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:25:25 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/16 11:49:10 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Useage: " << av[0] << "<log_level>" << std::endl;
		return 1;
	}
	Harl harl;
	
	std::string level = av[1];
	harl.complain(level);
}
