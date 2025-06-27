/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:40 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/31 16:05:09 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);

	std::list<int> l;
	for (int i = 0; i < 5; i++)
		l.push_back(i * 10);
		
	try
	{
		int value = 10;
		std::vector<int>::iterator it = easyfind(v, value);
		std::cout << "Found value " << value << " at position " << std::distance(v.begin(), it) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		int value = 20;
		std::list<int>::iterator it = easyfind(l, value);
		std::cout << "Found value " << value << " at position " << std::distance(l.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
}