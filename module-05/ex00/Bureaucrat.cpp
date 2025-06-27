/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:01 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/12 11:56:01 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Uknown"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
	checkGrade(Grade);
}
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
	return *this;
}

void	Bureaucrat::checkGrade(int Grade) const
{
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::string	Bureaucrat::getName(void)
{
	return this->name;
}
int 	Bureaucrat::getGrade(void)
{
	return this->grade;	
}
void Bureaucrat::incrementGrade(void)
{
	checkGrade(this->grade - 1);
	this->grade--;
}
void Bureaucrat::decrementGrade(void)
{
	checkGrade(this->grade + 1);
	this->grade++;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName()
		+ ", bureaucrat grade "
		<< bureaucrat.getGrade();
	return os;
}