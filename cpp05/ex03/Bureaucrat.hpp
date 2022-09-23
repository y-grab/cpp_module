#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <ostream>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);
		~Bureaucrat();

		const std::string&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form&) const;
		void				executeForm(Form&) const;

	public:	
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& 		operator<<(std::ostream &, const Bureaucrat &);

#endif