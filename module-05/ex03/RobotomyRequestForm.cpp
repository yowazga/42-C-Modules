/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:55:13 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 11:09:00 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotom form", 50, 50), target("Robotom form"){}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) :
	AForm("Robotom form", 72, 45), target(Target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other), target(other.target){}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradToolowException();
	else
	{
		std::cout << "Drilling noises..." << target << " has been robotomized successfully ";
		if (rand() % 2 == 0)
			std::cout << "50%. of the time. " << std::endl;
		else
			std::cout << "0%. of the time. Robotomy failed." << std::endl;
	}
}