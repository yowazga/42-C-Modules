/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:37:28 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/20 18:32:05 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	abs( Fixed object )
{
	if (object < 0)
		return (object * -1);
	return (object);
}

static Fixed calculateTriangleArea(const Point& a, const Point& b, const Point& c)
{
	Fixed x1 = a.getX();
    Fixed y1 = a.getY();
    Fixed x2 = b.getX();
    Fixed y2 = b.getY();
    Fixed x3 = c.getX();
    Fixed y3 = c.getY();

	return Fixed ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)))  / 2.0f; 
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	Fixed totalArea = abs(calculateTriangleArea(a, b, c));

	Fixed area1 = abs(calculateTriangleArea(point, a, b));
	Fixed area2 = abs(calculateTriangleArea(point, b, c));
	Fixed area3 = abs(calculateTriangleArea(point, c, a));
	if (totalArea == 0 || area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	return ((area1 + area2 + area3) == totalArea);
}