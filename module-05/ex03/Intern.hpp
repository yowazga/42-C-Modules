/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:55:43 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 13:40:27 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		static AForm* creatShrubberyform(const std::string& target);
		static AForm* creatRobotomyform(const std::string& target);
		static AForm* creatPresidentialform(const std::string& target);
	public:
		class creatFormException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Intern(void);
		Intern(const Intern&);
		~Intern(void);
		
		Intern& operator=(const Intern&);
		AForm* makeForm(const std::string&, const std::string&) const;
};