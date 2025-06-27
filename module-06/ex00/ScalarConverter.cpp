/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:41:29 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/19 19:21:48 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {(void)other;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {(void)other; return *this;}
ScalarConverter::~ScalarConverter(void) {}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return "char  : impossible\nint   : impossible\nfloat : impossible\ndouble: impossible";
}

bool IsPseudoLiteral(cstr_t& str)
{
	cstr_t pseudoListerals[] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};
	for(int i = 0; i < 6; i++)
	{
		if (str == pseudoListerals[i])
		{
			std::cout << "char: impossible\n"
					  << "int: imossible\n";
			(str == pseudoListerals[4] || str == pseudoListerals[5]) ?
				std::cout << "float: impossible\n" : std::cout << "float: " << str << "f\n";
			std::cout << "double: " << str << std::endl;
			return true;
		}
	}
	return false;
}

bool checkIsValide(cstr_t& str, char *endptr)
{
	if (!endptr[0] || (endptr[0] == 'f' && !endptr[1]) || (str.length() == 1 && endptr[0]))
		return true;
	return false;
}

void	ConvertToChar(double value)
{
	std::cout << "char  : ";
	if (value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if(!isprint(value))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	}
}

void	ConvertToInt(double value)
{
	std::cout << "int   : ";
	if (value < INT_MIN || value > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	ConvertToFloat(double value)
{
	std::cout << "float : " << static_cast<float>(value) << "f" << std::endl;
}

void	ConvertToDouble(double value)
{
	std::cout << "double: " << value << std::endl;
}

 void ScalarConverter::convert(cstr_t& str)
 {
	double	value;
	char	*endptr;
	int		precision;
	size_t	PointPosition;

	value =  strtod(str.c_str(), &endptr);
	if (str.length() == 1 && endptr[0])
		value = static_cast<double>(endptr[0]); // Convert single character to its ASCII value
	if (IsPseudoLiteral(str))
		return ;
	if (checkIsValide(str, endptr))
	{
		std::cout << std::fixed;
		PointPosition = str.find(".", 0);
		if (str.length() == 1 && str[0] == '.')
			precision = 1;
		else
			precision = (PointPosition != std::string::npos) ?
				(endptr[0] == 'f' ? str.length() - PointPosition - 2 : str.length() - PointPosition - 1) : 1;
		std::cout << std::setprecision(precision);
		// Call the conversion and printing functions (explicitly declared types)
		ConvertToChar(value);
		ConvertToInt(value);
		ConvertToFloat(value);
		ConvertToDouble(value);
	}
	else
		throw ScalarConverter::ImpossibleException();
 }