/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:19:56 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/22 16:55:49 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

typedef const std::string cstr_t;

class ScalarConverter
{
	private:
		ScalarConverter(void);
	public:
		ScalarConverter(const ScalarConverter&);
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter(void);
		class ImpossibleException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		static void convert(cstr_t&);
};
