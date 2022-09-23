/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:39:22 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 13:40:44 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = src.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Some WrongAnimal noise*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}