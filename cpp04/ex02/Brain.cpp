/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:07:27 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 14:10:49 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int		i;

	std::cout << "Brain default constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &x)
{
	int		i;

	std::cout << "Brain copy constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = x.ideas[i];
}

Brain::Brain(const std::string idea)
{
	int		i;

	std::cout << "Brain string constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain& Brain::operator=(const Brain &x)
{
	int		i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = x.ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

void Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}