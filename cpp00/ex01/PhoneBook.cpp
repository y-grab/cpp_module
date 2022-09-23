/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:20:58 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/25 15:31:14 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		add_contact(PhoneBook pbook[8], int contact_count)
{
	if (contact_count == 8)
	{
		for (int i = 1; i < 8; i++)
			pbook[i - 1] = pbook[i];
		pbook[7].page.clear();
		contact_count = 7;
	}
	pbook[contact_count].page.setAttributes();
	contact_count += 1;
	return (contact_count);
}

std::string	short_string(std::string src)
{
	if (src.size() > 10)
	{
		src.resize(9);
		src.append(".");
	}
	return (src);
}

void	print_book(PhoneBook pbook[8], int contact_count)
{
	int	i = 0;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < contact_count && i < 8)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(pbook[i].page.getFirstName());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(pbook[i].page.getLastName());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << short_string(pbook[i].page.getNickname());
		std::cout << std::endl;
		i++;
	}
}

void	print_page(PhoneBook pbook[8], int a)
{
	std::cout << "First name: " << pbook[a].page.getFirstName() << std::endl;
	std::cout << "Last name: " << pbook[a].page.getLastName() << std::endl;
	std::cout << "Nickname: " << pbook[a].page.getNickname() << std::endl;
	std::cout << "Phone number: " << pbook[a].page.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << pbook[a].page.getDarkestSecret() << std::endl;
}

int		incorrect_index()
{
	std::cout << "Incorrect index! Returning to main menu" << std::endl;
	return (1);
}

int		search_contact(PhoneBook pbook[8], int contact_count)
{
	std::string	index;
	int	a = 0;

	if (!contact_count)
	{
		std::cout << "You have no contacts! Returning to main menu" << std::endl;
		return (1);
	}
	else
	{
		print_book(pbook, contact_count);
		std::cout << "Please enter contact index: ";
		std::getline(std::cin, index);
		for (int i = 0; i < (int)index.length(); i++)
			if (!isdigit(index[i]))
				return(incorrect_index());
		a = std::atoi(index.c_str());
		if (a < 0 || a > 7 || a > contact_count - 1)
			return(incorrect_index());
		else
			print_page(pbook, a);
	}
	return (0);
}

void	greetings()
{
	std::cout << "Welcome to PhoneBook!" << std::endl;
	std::cout << "Available commands are:" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
}

int		main()
{
	PhoneBook pbook[8];
	int contact_count = 0;
	std::string buf;

	greetings();
	while (1)
	{
		std::cout << "Please enter your command: ";
		std::getline(std::cin, buf);
		if (!buf.compare("ADD"))
			contact_count = add_contact(pbook, contact_count);
		else if (!buf.compare("SEARCH"))
			search_contact(pbook, contact_count);
		else if (!buf.compare("EXIT"))
			exit(0);
		else
			std::cout << "No such command" << std::endl;
	}
	return (0);
}
