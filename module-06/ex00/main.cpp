/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:29 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/22 16:57:20 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	while (true)
	{
		std::string input;
		std::cout << "Enter a scalar value (or 'exit' to quit): ";
		std::getline(std::cin, input);

		if (input == "exit" || std::cin.eof())
			break ;
		try
		{
			std::cout << std::endl;
			ScalarConverter::convert(input);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
}