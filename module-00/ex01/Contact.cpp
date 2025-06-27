/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:03:25 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/03 16:03:26 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetFirstName(std::string firstname)
{
	FirstName = firstname;
}
void Contact::SetLastName(std::string lastname)
{
	LastName = lastname;
}
void Contact::SetNickName(std::string nickname)
{
	NickName = nickname;
}
void Contact::SetPhoneNumber(std::string phonenamber)
{
	PhoneNumber = phonenamber;
}
void Contact::SetDarkestSecret(std::string darkestsecret)
{
	DarkestSecret = darkestsecret;
}
std::string Contact::getFirstName()
{
	return FirstName;
}
std::string Contact::getLastName()
{
	return LastName;
}
std::string Contact::getNickName()
{
	return NickName;
}
std::string Contact::getPhoneNumber()
{
	return PhoneNumber;
}
std::string Contact::getDarkestSecret()
{
	return DarkestSecret;
}


