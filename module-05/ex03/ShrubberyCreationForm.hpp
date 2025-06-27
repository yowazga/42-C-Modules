/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:20:12 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 08:53:04 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(ShrubberyCreationForm&);
		~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		
		void execute(Bureaucrat const & executor) const;
};