/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:37:54 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 18:25:21 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <iostream>

static void	test_intern(const std::string &type, const std::string &target)
{
	Intern		bob;
	Form		*form;
	Bureaucrat	jim("Jim", 1);

	form = bob.makeForm(type, target);
	if (form)
	{
		std::cout << *form << std::endl;
		jim.signForm(*form);
		form->execute(jim);
	}
	delete (form);
}

int	main()
{
	srand(time(NULL));
	test_intern("shrubbery creation", "garden");
	std::cout << "----------------------------------" << std::endl;
	test_intern("robotomy request", "Bender");
	std::cout << "----------------------------------" << std::endl;
	test_intern("presidential pardon", "Tom");
	std::cout << "----------------------------------" << std::endl;
	test_intern("unknown form", "target");
	std::cout << "----------------------------------" << std::endl;
	test_intern("test", "lol");
	return (0);
}
