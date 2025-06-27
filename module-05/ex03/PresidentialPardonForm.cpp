/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:26:01 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 11:07:51 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	 AForm("Uknown presidential form", 25, 5), target("Presidential form"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Targe) :
	AForm("Presidential form", 25, 5), target(Targe)  {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	AForm(other), target(other.target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw;
	std::cout << target << " has been pardoned by Zaphod Beelebrox." << std::endl;
}