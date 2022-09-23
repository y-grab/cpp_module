/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:06:13 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 18:25:33 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5), _target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &x)
	: Form("PresidentialPardonForm", 25, 5), _target(x._target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string& PresidentialPardonForm::getTarget() const
{
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->isExecutable(executor))
		throw (Form::CannotExecuteException());
	std::cout << "Zaphod Beeblebrox forgave " << this->_target << "." << std::endl;
}
