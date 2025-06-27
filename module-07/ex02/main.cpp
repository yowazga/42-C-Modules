/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:28:18 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/24 17:10:21 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{	
	Array<int> intArray(5);


	for (unsigned int i = 0; i < intArray.size(); ++i)
		intArray[i] = i * 10;

	for (unsigned int i = 0; i < intArray.size(); ++i)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

	Array<int> intArrayCopy = intArray;

	std::cout << std::endl;
	for (unsigned int i = 0; i < intArrayCopy.size(); ++i)
		std::cout << "intArrayCopy[" << i << "] = " << intArrayCopy[i] << std::endl;
	
	std::cout << std::endl;
	for (unsigned int i = 0; i < intArray.size(); ++i)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	std::cout << std::endl;
	try
	{	
		intArray[5] = 42;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "Caught an std::out_of_rang exception: " << e.what() << std::endl;
	}
}