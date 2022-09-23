/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:49:44 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/25 15:31:19 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string	Contact::getFirstName()
{
	return(this->_first_name);
}

std::string	Contact::getLastName()
{
	return(this->_last_name);
}

std::string	Contact::getNickname()
{
	return(this->_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return(this->_phone_number);
}

std::string	Contact::getDarkestSecret()
{
	return(this->_darkest_secret);
}

void	Contact::setFirstName()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_first_name);
	while (this->_first_name.empty())
	{
		std::cout << "Field can't be empty!" << std::endl;
		std::cout << "Enter first name: ";
		std::getline(std::cin, this->_first_name);
	}
}

void	Contact::setLastName()
{
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_last_name);
	while (this->_last_name.empty())
	{
		std::cout << "Field can't be empty!" << std::endl;
		std::cout << "Enter last name: ";
		std::getline(std::cin, this->_last_name);
	}
}

void	Contact::setNickname()
{
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickname);
	while (this->_nickname.empty())
	{
		std::cout << "Field can't be empty!" << std::endl;
		std::cout << "Enter nickname: ";
		std::getline(std::cin, this->_nickname);
	}
}

void	Contact::setPhoneNumber()
{
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phone_number);
	while (this->_phone_number.empty())
	{
		std::cout << "Field can't be empty!" << std::endl;
		std::cout << "Enter phone number: ";
		std::getline(std::cin, this->_phone_number);
	}
}

void	Contact::setDarkestSecret()
{
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
	while (this->_darkest_secret.empty())
	{
		std::cout << "Field can't be empty!" << std::endl;
		std::cout << "Enter darkest_secret: ";
		std::getline(std::cin, this->_darkest_secret);
	}
}

void	Contact::setAttributes()
{
	setFirstName();
	setLastName();
	setNickname();
	setPhoneNumber();
	setDarkestSecret();
}

void	Contact::clear()
{
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nickname.clear();
	this->_phone_number.clear();
	this->_darkest_secret.clear();
}
