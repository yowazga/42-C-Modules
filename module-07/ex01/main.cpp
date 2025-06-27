/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:08:26 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/23 17:43:42 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(T element)
{
	std::cout << "[" << element << "] ";
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "Int Array: ";
	iter(intArray, 5, printElement<int>);
	
	std::cout << "\nDouble Array: ";
	iter(doubleArray, 5, printElement<double>);

	std::cout << std::endl;
	
	printElement<int>(500);

	std::cout << std::endl;
}