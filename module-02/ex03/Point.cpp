/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:15:00 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/20 15:24:47 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0) {}

Point::Point(float xValue, float yValue) : x(xValue), y(yValue) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point& other)
{
	(void)other;
	return *this;
}

Point::~Point() {}

Fixed Point::getX() const
{
	return x;
}
Fixed Point::getY() const
{
	return y;	
}