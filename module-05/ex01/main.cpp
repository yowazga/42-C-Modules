/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:59 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/12 14:03:33 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("Younes", 5);
		Bureaucrat bureaucrat2("Ahmed", 150);

		Form form1("form1", 10, 20);
		Form form2("form2", 100, 80);

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

		bureaucrat1.signForm(form1);
		bureaucrat2.signForm(form2);

		form1.beSigned(bureaucrat1);
		form2.beSigned(bureaucrat2);
		
		bureaucrat1.signForm(form1);
		bureaucrat2.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}