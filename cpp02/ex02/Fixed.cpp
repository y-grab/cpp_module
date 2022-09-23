/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:22:47 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/28 17:53:34 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpval(0)
{
	return;
}

Fixed::Fixed(const int x)
{
	_fpval = (x << _fract);
}

Fixed::Fixed(const float f)
{
	_fpval = std::roundf(f * 256);
}

Fixed::~Fixed()
{
    return;
}

int Fixed::getRawBits() const
{
    return _fpval;
}

void Fixed::setRawBits(int const raw)
{
    _fpval = raw;
}

Fixed::Fixed(Fixed const &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->_fpval = other.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->_fpval > rhs._fpval;
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->_fpval < rhs._fpval;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(*this == rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs.toInt() > 0)
		return Fixed(this->toFloat() / rhs.toFloat());
	else
	{
		std::cerr << "Cannot divide by zero" << std::endl;
		return (0);
	}
}


Fixed Fixed::operator++(int)
{
	Fixed temp;
    temp._fpval = _fpval++;
    return temp;
}

Fixed &Fixed::operator++()
{
	this->_fpval = ++_fpval;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
    temp._fpval = _fpval--;
    return temp;
}

Fixed &Fixed::operator--()
{
	this->_fpval = --_fpval;
	return *this;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1._fpval < fixed2._fpval)
		return fixed1;
	else
		return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1._fpval < fixed2._fpval)
		return fixed1;
	else
		return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1._fpval > fixed2._fpval)
		return fixed1;
	else
		return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1._fpval > fixed2._fpval)
		return fixed1;
	else
		return fixed2;
}

float Fixed::toFloat() const
{
    return (float)_fpval / 256;
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
