/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:27:24 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 19:16:40 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	Harl::_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldn`t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	void		(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
		if (level == this->_levels[i])
			(this->*f[i])();
}
