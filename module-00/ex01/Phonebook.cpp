/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:25:14 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/04 19:45:26 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>
PhoneBook::PhoneBook()
{
	IndisContact = -1;
}

int PhoneBook::CheckErro(std::string input, int &indis)
{
	if (std::cin.eof() || input.empty())
	{
		if (input.empty())
			std::cout << "A blank line is not acceptable" << std::endl;
		indis--;
		return 1;
	}
	std::string::const_iterator c = input.begin();
	while (c != input.end())
	{
		if (!std::isspace(static_cast<unsigned char>(*c)))
			return 0;
		++c;
	}
	indis--;
	std::cout << std::endl;
	std::cout << "A blank line is not acceptable" << std::endl;
	return 1;
}

void PhoneBook::Add()
{
	std::string input;

	IndisContact++;
	std::cout << "Please enter your first name: ";
	if(!std::getline(std::cin, input) || CheckErro(input, IndisContact))
		return ;
	contact[IndisContact % 8].SetFirstName(input);
	std::cout << "Please enter your last name: ";
	if(!std::getline(std::cin, input) || CheckErro(input, IndisContact))
				return ;
	contact[IndisContact % 8].SetLastName(input);
	std::cout << "Please enter your nickname name: ";
	if(!std::getline(std::cin, input) || CheckErro(input, IndisContact))
				return ;
	contact[IndisContact % 8].SetNickName(input);
	std::cout << "Please enter your phone number: ";
	if(!std::getline(std::cin, input) || CheckErro(input, IndisContact))
				return ;
	contact[IndisContact % 8].SetPhoneNumber(input);
	std::cout << "Please enter your darkst secret: ";
	if(!std::getline(std::cin, input) || CheckErro(input, IndisContact))
				return ;
	contact[IndisContact % 8].SetDarkestSecret(input);
}

void PhoneBook::DisplayDetails(int index)
{
	std::cout << std::endl;
	std::cout << "---------------Contact Details---------------" << std::endl;
	std::cout << "First Name    : " << contact[index].getFirstName() << std::endl;
	std::cout << "Last Name     : " << contact[index].getLastName() << std::endl;
	std::cout << "Nick Name     : " << contact[index].getNickName() << std::endl;
	std::cout << "Phone Number  : " << contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact[index].getDarkestSecret() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

static void PrintContacts(std::string str)
{
	if (str.length() > 10)
			std::cout << std::setw(10) << str.substr(0, 9) + "." + "|";
	else
		std::cout << std::setw(11) << str + "|";

}

void PhoneBook::Search()
{
	int i = 0;
	int	indis = 0;

	if (IndisContact == -1)
	{
	 	std::cout << std::endl;
		std::cout << ">>>>>>>>>>>No contact to show<<<<<<<<<<<" << std::endl;
	 	std::cout << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < 8 && i <= IndisContact)
	{
		std::cout  << "|         " << i + 1 << "|";
		PrintContacts(contact[i].getFirstName());
		PrintContacts(contact[i].getLastName());
		PrintContacts(contact[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (true)
	{
		std::cout << "Select an index: ";
		if (std::cin >> indis)
		{
			if (indis > 0 && indis - 1 < 8 && indis - 1 <= IndisContact)
			{
				DisplayDetails(indis - 1);	
				break ;
			}
			std::cout << "Invalid index: " << indis << std::endl;	
		}
		else if (std::cin.eof())
        {
			std::cout << std::endl;
            std::cout << "End of input reached. Exiting." << std::endl;
            return ;
        }
		else
		{
			std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
		}
	}
	std::cin.ignore(INT_MAX, '\n');
}
