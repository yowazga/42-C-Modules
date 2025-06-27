/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:05:16 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/12 14:07:23 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form(void) {}

Form::Form(std::string Name, int gradeSign, int gradeExecute) :
	name(Name), checkSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw Form::GradToolowException();
}
Form::Form(const Form& other) :
	name(other.name), checkSigned(other.checkSigned), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{}	

Form::~Form(void) {}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		checkSigned = other.checkSigned;
	return *this;
}

const std::string& Form::getName() const
{
	return this->name;
}
int Form::getGradeSign() const
{
	return this->gradeSign;
}
int Form::getGradeExecute() const
{
	return this->gradeExecute;	
}
bool Form::isSigned() const
{
	return this->checkSigned;	
}

void Form::beSigned( Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->checkSigned = true;
	else
		throw Form::GradToolowException();
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
	os << "Form: " << form.getName()
		<< " [Sing Grade: " << form.getGradeSign()
		<< ", Exec Grade: " << form.getGradeExecute() << "]";
	return os;
}