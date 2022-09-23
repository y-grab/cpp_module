/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:37:54 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/06 15:38:16 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat bob("bob", 2);

		std::cout << bob << std::endl;
		std::cout << "> Incrementing " << bob.getName() << "'s grade (currently " << bob.getGrade() << ")" << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		try
		{
			std::cout << "> Incrementing " << bob.getName() << "'s grade (currently " << bob.getGrade() << ")" << std::endl;
			bob.incrementGrade();
		}
		catch (std::exception& e)
		{
			std::cerr << "> Could not increment grade: " << e.what() << std::endl;
		}
	}
	std::cout << "----------" << std::endl;
	{
		Bureaucrat *jim = new Bureaucrat("jim", 149);

		std::cout << *jim << std::endl;
		std::cout << "> Decrementing " << jim->getName() << "'s grade (currently " << jim->getGrade() << ")" << std::endl;
		jim->decrementGrade();
		std::cout << *jim << std::endl;
		try
		{
			std::cout << "> Decrementing " << jim->getName() << "'s grade (currently " << jim->getGrade() << ")" << std::endl;
			jim->decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cerr << "> Could not decrement grade: "
			          << e.what()
					  << std::endl;
		}
		delete (jim);
	}
	std::cout << "----------" << std::endl;
	{
		try
		{
			Bureaucrat bob("bob", 0);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat bob("bob", 175);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
