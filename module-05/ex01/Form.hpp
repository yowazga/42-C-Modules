/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:11:08 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/12 14:04:28 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool checkSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
		class GradToolowException : public Bureaucrat::GradeTooLowException {};

		// Form(void);
		Form(std::string, int, int);
		Form(const Form&);
		~Form(void);
		Form& operator=(const Form&);

		const std::string& getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool isSigned() const;

		void beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, Form& form);