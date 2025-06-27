/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:05:16 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 10:59:36 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("Uknown"), checkSigned(false), gradeSign(50), gradeExecute(50) {}

AForm::AForm(std::string Name, int gradeSign, int gradeExecute) :
	name(Name), checkSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw AForm::GradToolowException();
}
AForm::AForm(const AForm& other) :
	name(other.name), checkSigned(other.checkSigned), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{}	

AForm::~AForm(void) {}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		checkSigned = other.checkSigned;
	return *this;
}

const std::string& AForm::getName() const
{
	return this->name;
}
int AForm::getGradeSign() const
{
	return this->gradeSign;
}
int AForm::getGradeExecute() const
{
	return this->gradeExecute;	
}
bool AForm::isSigned() const
{
	return this->checkSigned;	
}

void AForm::beSigned( Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->checkSigned = true;
	else
		throw AForm::GradToolowException();
}

std::ostream& operator<<(std::ostream& os, AForm& form)
{
	os << "Form: " << form.getName()
		<< " [Sing Grade: " << form.getGradeSign()
		<< ", Exec Grade: " << form.getGradeExecute() << "]";
	return os;
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Grade is not signed!";
}

const char* AForm::FileCreationException::what()const throw()
{
	return "Error creating the file!";
}