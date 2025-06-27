/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:59 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 10:52:08 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("younes", 5);
		Bureaucrat bureaucrat2("Ahmed", 150);

		ShrubberyCreationForm shrubberyForm("home");
		RobotomyRequestForm robotomForm("John");
		PresidentialPardonForm pardonForm("ali");

		bureaucrat1.signForm(shrubberyForm);
		bureaucrat1.executeForm(shrubberyForm);

		bureaucrat2.signForm(robotomForm);
		bureaucrat2.executeForm(robotomForm);

		bureaucrat1.signForm(pardonForm);
		bureaucrat1.executeForm(pardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}