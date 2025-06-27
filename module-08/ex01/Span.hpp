/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:29:07 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/05 10:18:04 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <ctime>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span();
		Span(unsigned int);
		Span(const Span&);
		~Span();
		Span& operator=(const Span&);
		
		void addNumber(int);
		int shortestSpan(void);
		int longestSpan(void);
		void addRange(size_t);
		template <typename Input>
		void addRange2(Input, Input);

		void printVector(void);
};

template <typename Input>
void Span::addRange2(Input begin, Input end)
{
	int numOfElements = (int)std::distance(begin, end);
	if (numOfElements + numbers.size() > N)
		throw std::runtime_error("Not enough space to add the range");
	numbers.insert(numbers.end(), begin, end);
}