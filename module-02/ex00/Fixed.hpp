/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:00:09 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/18 15:40:36 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractionalBits;
	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed();
		Fixed(const Fixed& fixed);
		~Fixed();
		Fixed& operator=(const Fixed& fixed);
};

#endif