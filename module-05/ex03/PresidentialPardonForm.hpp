/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:19:35 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/15 10:25:52 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(const PresidentialPardonForm&);

		void execute(const Bureaucrat& executor) const;
};