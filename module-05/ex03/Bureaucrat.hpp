/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:59:19 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 08:57:29 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int		grade;
		void	checkGrade(int) const;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Bureaucrat(void);
		Bureaucrat(const std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		
		Bureaucrat& operator=(const Bureaucrat&);
		
		std::string	getName(void);
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		void 		signForm(AForm&);
		void		executeForm(AForm const & form);
};

#include "AForm.hpp"

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);