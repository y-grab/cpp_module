#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &);
		~RobotomyRequestForm();

		const std::string&	getTarget() const;
		void				execute(const Bureaucrat &) const;

	private:
		RobotomyRequestForm();
		std::string	_target;
};

#endif