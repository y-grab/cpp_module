/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:28:11 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 13:40:38 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = src.type;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "*Some Animal noise*" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
