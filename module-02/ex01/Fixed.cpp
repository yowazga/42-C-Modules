/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:13:34 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/20 10:49:11 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : Value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nvalue) : Value(nvalue << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float nvalue) : Value(roundf(nvalue * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) : Value(other.Value)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->Value = other.Value;
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->Value;
}
void Fixed::setRawBits(int const raw)
{
	this->Value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)(Value) / (1 << fractionalBits);
}
int Fixed::toInt(void) const
{
	return this->Value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}