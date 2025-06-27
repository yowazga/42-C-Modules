/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:13:34 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/19 17:25:47 by yowazga          ###   ########.fr       */
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

//-------Overloaded comparison operators

bool Fixed::operator>(const Fixed& other) const
{
	return this->Value > other.Value;
}
bool Fixed::operator<(const Fixed& other) const
{
	return this->Value < other.Value;
}
bool Fixed::operator>=(const Fixed& other) const
{
	return this->Value >= other.Value;
}
bool Fixed::operator<=(const Fixed& other) const
{
	return this->Value <= other.Value;
}
bool Fixed::operator==(const Fixed& other) const
{
	return this->Value == other.Value;
}
bool Fixed::operator!=(const Fixed& other) const
{
	return this->Value != other.Value;
}

//-------Overloaded arithmetic operators

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

//------Overloaded increment/decrement operators

Fixed& Fixed::operator++()
{
	this->Value++;
	
	int maxIntValue = (1 << (32 - fractionalBits)) - 1;
	if (this->Value > maxIntValue)
		this->Value = maxIntValue;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->Value++;

	int maxIntValue = (1 << (32 - fractionalBits)) - 1;
	if (this->Value > maxIntValue)
		this->Value = maxIntValue;
	return temp;
}
Fixed& Fixed::operator--()
{
	this->Value--;

	int minIntvalue = -(1 << (32 - fractionalBits));
	if (this->Value < minIntvalue)
		this->Value = minIntvalue;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->Value--;

	int minIntvalue = -(1 << (32 - fractionalBits));
	if (this->Value < minIntvalue)
		this->Value = minIntvalue;
	return temp;
}

//------member function for min and max

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}