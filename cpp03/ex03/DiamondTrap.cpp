/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:01:54 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/29 17:52:35 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const& name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_fragHitPoints;
	this->_energyPoints = ScavTrap::_scavEnergyPoints;
	this->_attackDamage = FragTrap::_fragAttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << "! My ClapTrap name is " << ClapTrap::_name << "!" << std::endl;
}


std::string const& DiamondTrap::getName(void) const 
{
  return _name;
}