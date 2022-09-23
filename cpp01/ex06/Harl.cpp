/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:15:22 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 19:32:23 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	Harl::_levels[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};

static int	get_filter(const std::string *levels, const std::string str)
{
	for (int i = 0; i < 4; i++)
		if (str == levels[i])
			return (i);
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (-1);
}

Harl::Harl(const std::string str)
{
	this->_filter = get_filter(this->_levels, str);
}

Harl::~Harl()
{
	return;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl
	<< "You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl
	<< "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string filter)
{
	int	level = get_filter(this->_levels, filter);

	if (level <= this->_filter)
	{
		switch (level)
		{
			case 3:
				this->debug();
				break ;
			case 2:
				this->info();
				break ;
			case 1:
				this->warning();
				break ;
			default:
				this->error();
		}
	}
}
