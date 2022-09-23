/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:33:47 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/08 16:53:44 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void multiply(int const &n) {
	std::cout << n * 2 << std::endl;
}

void print_str(std::string const &s) {
	std::cout << s << std::endl;
}

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	::iter(array, 5, multiply);

	std::string strings[] = {"s1", "s2", "s3"};
	::iter(strings, 3, print_str);
	return 0;
}