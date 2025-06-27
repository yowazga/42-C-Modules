/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:28:39 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/20 18:31:38 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(0.0f, 0.0f);
	Point b(4.0f, 0.0f);
	Point c(2.0f, 3.0f);

	Point pointIn(2.0f, 1.5f);
	Point pointOut(3.0f, 2.0f);


	bool In1 = bsp(a, b, c, pointIn);
	bool Out2 = bsp(a, b, c, pointOut);

	std::cout << "Point1: " ;
	if (In1)
		std::cout << "is Inside the triangle" << std::endl;
	else
		std::cout << "is Outside the triangle" << std::endl;
	
	std::cout << "Point2: ";
	if (Out2)
		std::cout << "is Inside the triangle" << std::endl;
	else
		std::cout << "is Outside the triangle" << std::endl;
	return 0;
}