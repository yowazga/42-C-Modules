/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:00:22 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/08 12:35:34 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp(38);
	try
	{
		sp.addRange(30);
		sp.printVector();
		std::vector<int> vec;
		vec.push_back(0);
		vec.push_back(2);
		vec.push_back(4);
		vec.push_back(8);

		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(3);
		lst.push_back(9);
		lst.push_back(6);

		sp.addRange2(vec.begin(), vec.end());
		sp.printVector();
		sp.addRange2(lst.begin(), lst.end());
		sp.printVector();
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}	
}