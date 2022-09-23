/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:50:13 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 19:27:34 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

std::string	str_replace(std::string	str, std::string search, std::string replace)
{
	std::string ret("");
	int j;
	int len = (int)search.length();

	for (int i = 0; i < (int)str.length(); i++)
	{
		j = 0;
		while (str[i + j] == search[j] && j < len)
			j++;
		if (j == len)
		{
			ret += replace;
			i += (j - 1);
		}
		else
			ret += str[i];
	}
	return (ret);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <search> <replace>" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string	search = av[2];
	std::string	replace = av[3];
	std::string	str;
	std::ifstream	infile;
	std::ofstream	outfile;
	if (filename.length() == 0 || search.length() == 0)
	{
		std::cerr << "Invalid filename or string to search" << std::endl;
		return (1);
	}
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Unable to open input file" << std::endl;
		return (1);
	}
	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Unable to open output file" << std::endl;
		return (1);
	}
	while (std::getline(infile, str))
		outfile << str_replace(str, search, replace) << std::endl;
	infile.close();
	outfile.close();
	return (0);
}