/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:17:06 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/08 10:10:33 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : parent() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : parent(other) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
		parent::operator=(other);
	return *this;
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return parent::c.begin();
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return parent::c.end();
}

template <typename T>
void MutantStack<T>::push_back(const T& value)
{
	parent::push(value);
}
template <typename T>
void MutantStack<T>::pop_back()
{
	parent::pop();
}
