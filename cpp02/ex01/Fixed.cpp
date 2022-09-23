/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:25:05 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/28 17:50:07 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpval(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	_fpval = (x << _fract);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fpval = std::roundf(f * 256);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return _fpval;
}

void Fixed::setRawBits(int const raw)
{
    _fpval = raw;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->_fpval = src.getRawBits();
    return *this;
}

float Fixed::toFloat() const
{
    return (float )_fpval / 256;
}

int Fixed::toInt() const
{
    return _fpval >> _fract;
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed)
{
    ostream << fixed.toFloat();
    return ostream;
}
