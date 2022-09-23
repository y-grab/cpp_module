#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &);
		~PresidentialPardonForm();

		const std::string&	getTarget() const;
		void				execute(const Bureaucrat &) const;

	private:
		PresidentialPardonForm();
		std::string	_target;
};

#endif