#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class Form
{
	public:	
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExec);
		Form(const Form &);
		Form& operator=(const Form &);
		~Form();

		const std::string& getName() const;
		int                getGradeToSign() const;
		int                getGradeToExecute() const;
		bool               isSigned() const;
		bool               beSigned(const Bureaucrat &b);

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
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream & operator<<(std::ostream &out, Form const &src);

#endif