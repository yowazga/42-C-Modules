/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:16:43 by yowazga           #+#    #+#             */
/*   Updated: 2023/11/08 12:38:08 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{		
	public:
		typedef std::stack<T> parent;
		typedef typename parent::container_type::iterator iterator;
		
		MutantStack(void);
		MutantStack(const MutantStack&);
		~MutantStack(void);
		MutantStack& operator=(const MutantStack&);

		iterator begin();
		iterator end();

		void push_back(const T&);
		void pop_back();
};

#include "MutantStack.tpp"
