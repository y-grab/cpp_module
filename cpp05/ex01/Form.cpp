/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:53:27 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 17:32:41 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExec(0) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExec)
	:	_name(name),
		_isSigned(false),
		_gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec)
{
	if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		throw (Form::GradeTooHighException());
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &src)
	:	_name(src._name),
		_isSigned(src._isSigned),
		_gradeToSign(src._gradeToSign),
		_gradeToExec(src._gradeToExec) {}

Form&	Form::operator=(const Form &src)
{
	this->_isSigned = src._isSigned;
	return *this;
}

Form::~Form() {}

const std::string& Form::getName() const
{
	return _name;
}

int		Form::getGradeToSign() const
{
	return _gradeToSign;
}

int		Form::getGradeToExecute() const
{
	return _gradeToExec;
}

bool	Form::isSigned() const
{
	return _isSigned;
}

bool	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw (Form::GradeTooLowException());
	_isSigned = true;
	return (true);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("form: grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("form: grade too low");
}

std::ostream&	operator<<(std::ostream &out, Form const &src)
{
	out << "Form " << src.getName() << ", grade to sign " << src.getGradeToSign()
		<< ", grade to execute " << src.getGradeToExecute() << ", ";
	if (src.isSigned())
		out << "signed.";
	else
		out << "not signed.";
	return (out);
}
