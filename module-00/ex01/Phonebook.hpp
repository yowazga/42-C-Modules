/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:03:20 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/04 18:23:58 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int IndisContact;
	public:
		PhoneBook();
		void Add();
		void Search();
		void DisplayDetails(int index);
		int CheckErro(std::string input, int &indis);
};

#endif