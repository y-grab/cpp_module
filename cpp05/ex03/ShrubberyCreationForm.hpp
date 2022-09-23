#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string &);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();

		const std::string&	getTarget() const;
		void				execute(const Bureaucrat &) const;

	private:
		ShrubberyCreationForm();
		std::string	_target;

};

#endif