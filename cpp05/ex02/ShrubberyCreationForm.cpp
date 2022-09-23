/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:53:13 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/03 18:07:46 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
	: Form("ShrubberyCreationForm", 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: Form("ShrubberyCreationForm", 145, 137), _target(src._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string&	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	file;
	std::string		file_path;

	if (!isExecutable(executor))
		throw (Form::CannotExecuteException());
	file_path = this->_target + "_shrubbery";
	file.open(file_path.c_str(), std::fstream::out);
	if (!file.is_open())
	{
		std::cerr << "Could not open file \'" << file_path << "\'" << std::endl;
		return ;
	}
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "       | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file << std::endl;
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~      __ ~~\\" << std::endl;
	file << "{     -         }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | |    _" << std::endl;
	file << "   -_  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file.close();
}
