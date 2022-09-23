/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:21:39 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 18:09:15 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
	if (src._grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (src._grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = src._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int		Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade++;
}

void	Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed form '" << f.getName() << "'." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << " could not sign form '" << f.getName() << "': " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form &f) const
{
	try {
		f.execute(*this);
		std::cout << "'" << this->getName() << "' executed form '" << f.getName() << "'." << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "'" << this->getName() << "' could not execute form '" << f.getName() << "': " << e.what() << std::endl;
	} 
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureaucrat: grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureaucrat: grade too low");
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (out);
}
