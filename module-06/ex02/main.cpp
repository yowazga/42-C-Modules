/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:02:35 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/21 15:44:50 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base* generate(void)
{
	int randomValue = std::rand() % 3;
	switch (randomValue)
	{
		case 0 : return new A;
		case 1 : return new B;
		default : return new C;
	}
}

int main()
{
	std::srand((std::time(NULL)));
	for(int i = 0; i < 5; i++)
	{
		Base* obj = generate();
		std::cout << "{ " << i << " }" << std::endl;
		std::cout << "Pointer: " << std::endl;
		identify(obj);
		std::cout << "Reference: " << std::endl;
		identify(*obj);
		delete obj;
	}
}