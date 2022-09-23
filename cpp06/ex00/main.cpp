/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:29:55 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/07 15:04:38 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static bool is_valid(std::string &s)
{
	if (is_pseudo_literal(s))
		return true;
	if (s.length() == 1 && isalpha(s[0]))
	{
		s = std::to_string(static_cast<int>(s[0]));
		return true;
	}
	for (size_t i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
			return false;
	}
	return true;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "invalid number of arguments" << std::endl;
		return 1;
	}
	std::string s(av[1]);
	if (is_valid(s))
		print_all_convertions(s);
	else
		std::cout << "invalid argument" << std::endl;
	return 0;
}
