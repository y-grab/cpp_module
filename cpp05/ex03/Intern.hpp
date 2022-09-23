#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		~Intern();
	
		Form *makeForm(const std::string& name, const std::string& target);
};

#endif