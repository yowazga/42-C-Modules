/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:01 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 08:57:39 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Uknown"), grade(150) {}

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
int 	Bureaucrat::getGrade(void) const
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

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const AForm::GradToolowException& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}