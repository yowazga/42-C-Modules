/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:59 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/12 12:09:47 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("Younes", 5);
		Bureaucrat bureaucrat2("Ahmed", 30);

		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;

		bureaucrat1.decrementGrade();
		bureaucrat2.decrementGrade();
		
		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;

		Bureaucrat invalid("invald", 150);
		invalid.decrementGrade();
		// std::cout << invalid << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}