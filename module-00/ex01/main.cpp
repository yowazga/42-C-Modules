/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:25:10 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/04 19:49:38 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook;

	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter command (ADD, SEARCH, EXIT): " << std::endl;
		std::cout << "> ";
		if (!std::getline(std::cin, input))
			break;
		if (input == "EXIT" )
			break ;
		else if (input == "ADD")
		{
			phonebook.Add();
			if (std::cin.eof())
				break ;
			std::cout << std::endl;
		}
		else if (input == "SEARCH")
			phonebook.Search();
	}
	return 0;
}