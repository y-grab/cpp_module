/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:28:08 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/28 17:48:51 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//my tests
	Fixed c(1);
	Fixed d(2);
	std::cout << "==========" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "==========" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	if (c >= d)
		std::cout << "c >= d" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	if (c == d)
		std::cout << "c == d" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	std::cout << "==========" << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "==========" << std::endl;
	std::cout << "increment c 4 times" << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "==========" << std::endl;
	std::cout << "decrement d 4 times" << std::endl;
	std::cout << "d-- = " << d-- << std::endl;
	std::cout << "--d = " << --d << std::endl;
	std::cout << "d-- = " << d-- << std::endl;
	std::cout << "--d = " << --d << std::endl;
	std::cout << "d = " << d << std::endl;
	return 0;
}

/*
EXPECTED OUTPUT

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
*/
