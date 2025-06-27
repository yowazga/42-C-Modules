/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:11:08 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 11:13:19 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string name;
		bool checkSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
		class GradToolowException : public Bureaucrat::GradeTooLowException {};
		class FormNotSignedException : public std::exception
		{
			const char* what() const throw();	
		};
		class FileCreationException : public std::exception
		{
			const char* what() const throw();
		};

		AForm(void);
		AForm(std::string, int, int);
		AForm(const AForm&);
		virtual ~AForm(void);
		
		AForm& operator=(const AForm&);

		const std::string& getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool isSigned() const;

		void beSigned(Bureaucrat& bureaucrat);
		virtual void execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, AForm& form);