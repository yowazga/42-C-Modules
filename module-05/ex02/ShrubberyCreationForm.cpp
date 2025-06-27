/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:23:54 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 14:19:16 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("shrubbery Form", 145, 137), target("unspecified"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) :
	AForm("Shrubbery Form", 145, 137), target(Target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) :
	AForm(other), target(other.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradToolowException();
	std::string nfile(target + "_shrubbery");
	std::ofstream outfile(nfile.c_str());
	if (!outfile.is_open())
		throw AForm::FileCreationException();
	outfile << "\"Shrubbey for: " + target + ".\n"
			+"           @@           \n"
			+"          @@@@          \n"
			+"         @@@@@@         \n"
			+"       @@@@@@@@@@       \n"
			+"      @@@@@@@@@@@@      \n"
			+"     @@@@@@@@@@@@@@     \n"
			+"    @@@@@@@@@@@@@@@@    \n"
			+"  @@@@@@@@@@@@@@@@@@@@  \n"
			+" @@@@@@@@@@@@@@@@@@@@@@ \n"
			+"@@@@@@@@@@@@@@@@@@@@@@@@\n"
			+"          ####          \n"
			+"          ####          \n"
			+"          ####          \"\n";
	outfile.close();
	std::cout << "Shrubbery creatiion form executted successfully." << std::endl;
}