/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:22:35 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 16:58:21 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& other)
{(void)other;}

Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}
AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm* (*funcs[3])(const std::string&)  =
		{Intern::creatRobotomyform, Intern::creatPresidentialform, Intern::creatShrubberyform};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return funcs[i](target);
		}
	}
	std::cerr << "the form " << formName << " is invalid!" << std::endl;
	return NULL;
}

AForm* Intern::creatShrubberyform(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}
AForm* Intern::creatRobotomyform(const std::string& target)
{
	return new RobotomyRequestForm(target);
}
AForm* Intern::creatPresidentialform(const std::string& target)
{
	return new PresidentialPardonForm(target);	
}

const char* Intern::creatFormException::what() const throw()
{
	return "the form that passed in invalid";
}