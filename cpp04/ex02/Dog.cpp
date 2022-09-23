/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:31:49 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 15:14:15 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*(src._brain));
}

Dog::Dog(const std::string& idea)
{
	std::cout << "Dog string constructor called" << std::endl;
	this->_brain = new Brain(idea);
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = src.type;
	delete (this->_brain);
	this->_brain = new Brain(*(src._brain));
	return *this;
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}
