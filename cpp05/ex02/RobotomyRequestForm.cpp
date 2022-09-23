/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:00:23 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 18:07:48 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &x)
	: Form("RobotomyRequestForm", 72, 45), _target(x._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!isExecutable(executor))
		throw (Form::CannotExecuteException());
	std::cout << "*drill noises*" << std::endl;
	if (std::rand() % 2)
		std::cout << "Operation successful. " << _target << " has been robotomized." << std::endl;
	else
		std::cout << "Operation failed." << std::endl;
}
