/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:50:50 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 10:08:59 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		const std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);

		void execute(Bureaucrat const & executor) const;
};