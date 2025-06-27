/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:35:55 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/08 12:34:02 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n)
{numbers.reserve(N);}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers) {}

Span::~Span() {}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		N = other.N;
		numbers = other.numbers;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (numbers.size() <= this->N)
		numbers.push_back(num);
	else
		throw std::runtime_error("Span is full");
}
int Span::shortestSpan(void)
{
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find a span");
	std::vector<int> sorteNumbers = this->numbers;
	std::sort(sorteNumbers.begin(), sorteNumbers.end());
	int minSpan = sorteNumbers[1] - sorteNumbers[0];
	for (size_t i = 2; i < sorteNumbers.size(); ++i)
	{
		int span = sorteNumbers[i] - sorteNumbers[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}
int Span::longestSpan(void)
{
	if (numbers.size() <= 1)
		throw std::runtime_error("not enough numbers to find a span");
	std::vector<int> sortNumbers;
	sortNumbers = this->numbers;
	std::sort(sortNumbers.begin(), sortNumbers.end());
	return sortNumbers.back() - sortNumbers.front();
}


void Span::addRange(size_t n)
{
	std::srand(std::time(NULL));
	if (n == 0)
		n = N - numbers.size();
	if (n == 0)
		throw std::runtime_error("Nothing to add");
	if (n + numbers.size() > N)
		throw std::runtime_error("Not enough space to add the range");
	for (size_t i = 0; i < n; ++i)
	{
		int randomValue = rand() % ( n + 1);
		addNumber(randomValue);
	}
}

void Span::printVector(void)
{
	for(size_t i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;
}