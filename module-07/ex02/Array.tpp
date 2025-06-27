/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:09:52 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/24 15:39:55 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elements(NULL), arraySize(n)
{
	allocateMemory(arraySize);
}

template <typename T>
Array<T>::Array(const Array& other) : elements(NULL), arraySize(0)
{
	allocateMemory(arraySize);
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		if (this->elements)
			delete[] elements;
		this->arraySize = other.arraySize;
		this->elements = new T[other.size()];
		for (size_t i = 0; i < arraySize; ++i)
			elements[i] = other.elements[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] elements;
}
template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (index >= arraySize || index < 0)
		throw std::out_of_range("Index out of bounds");
	return elements[index];
}

template <typename T>
size_t Array<T>::size() const 
{
	return arraySize;
}

template <typename T>
void Array<T>::allocateMemory(size_t size)
{
	if (size > 0)
		elements = new T[size];
	else
		elements = NULL;
}