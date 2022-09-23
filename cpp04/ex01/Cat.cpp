/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:35:56 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 15:14:36 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*(src._brain));
}

Cat::Cat(const std::string& idea)
{
	std::cout << "Cat string constructor called" << std::endl;
	this->_brain = new Brain(idea);
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = src.type;
	delete (this->_brain);
	this->_brain = new Brain(*(src._brain));
	return *this;
}

Cat::~Cat()
{
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}
