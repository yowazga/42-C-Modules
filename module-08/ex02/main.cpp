/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:07:55 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/08 12:48:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "Testing MutantStack:" << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	// Iterate over elements using MutantStack's iterator
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Elements in MutantStack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	//=====================================================
	std::list<int> myList;
	
	myList.push_back(5);
	myList.push_back(17);
	std::cout << "\nTesting std::list:" << std::endl;
	std::cout << "Top: " << myList.back() << std::endl;  // Use back() for std::list
	myList.pop_back();  // Use pop_back() for std::list
	std::cout << "Size: " << myList.size() << std::endl;
	myList.push_back(3);  // Use push_back() for std::list
	myList.push_back(5);
	myList.push_back(737);

	// Iterate over elements using std::list's iterator
	std::list<int>::iterator itList = myList.begin();
	std::list<int>::iterator iteList = myList.end();
	std::cout << "Elements in std::list:" << std::endl;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}
}
