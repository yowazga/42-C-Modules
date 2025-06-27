/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:57:04 by yowazga           #+#    #+#             */
/*   Updated: 2023/10/21 12:50:44 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data originalData;

	originalData.value = 42;
	originalData.name = "younes wazga";
	
	// Serialize the original data pointer
	uintptr_t serializedPtr = Serializer::serialize(&originalData);

	// Deserialize the serialized pointer
	Data* deserializedData = Serializer::deserialize(serializedPtr);

	if (deserializedData == &originalData)
	{
		std::cout << "Original Data Value: " << originalData.value << std::endl;
		std::cout << "Original Data name: " << originalData.name << std::endl;
		std::cout << "-----------------------" << std::endl;
		std::cout << "Deserialized Data Value:" << deserializedData->value << std::endl;
		std::cout << "Deserialized Data Value:" << deserializedData->name << std::endl;
	}
	else
		std::cerr << "Serialization and desrialization failed." << std::endl;
}