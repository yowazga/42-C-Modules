/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:57:31 by yowazga           #+#    #+#             */
/*   Updated: 2023/09/14 14:50:38 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replaceAll(const std::string &input, const std::string &s1, const std::string &s2)
{
	std::string modifecation = input;
	size_t found = modifecation.find(s1);
	while (found != std::string::npos)
	{
		modifecation.erase(found, s1.length());
		modifecation.insert(found, s2);
		found = modifecation.find(s1, found + s2.length());
	}
	return modifecation;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "cant open file input" << std::endl;
		return 1;
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open())
	{
		std::cout << "cant open file output" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		outputFile << replaceAll(line, s1, s2);
		outputFile << '\n';
	}
	inputFile.close();
	outputFile.close();
}